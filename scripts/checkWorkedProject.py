import re
import os

re_pattern = r'^Bai[1-9].$'
re_pattern_readme = r'\[!\[UnworkedProject Badge\].+'
replace_worked_project_badge = r'[![UnworkedProject Badge](https://img.shields.io/badge/worked_project-{count_worked_files}/{count_projects}-green?style=for-the-badge)](./UnworkedProject.md)'
source_code_filename = 'Source.cpp'
UnworkedProject_filename = 'UnworkedProject.md'
UnworkedProject_file_content = r"""
## Unworked projects

List các file {source_code_filename} chưa làm:

""".format(source_code_filename=source_code_filename)


def listOfProject():
    global directories
    global count_projects
    if re.match(re_pattern, os.listdir('./')):
        directories += [project_dir for project_dir in os.listdir(
            './') if re.match(re_pattern, project_dir) and os.path.isdir(project_dir)]
    count_projects = len(directories)


def checkWorkedProject():
    global count_worked_files
    count_worked_files = 0

    with open(UnworkedProject_filename, 'w') as file:
        file.write(f'{UnworkedProject_file_content}'.format())

    for project_dir in directories:
        if os.path.getsize(os.path.join(project_dir, source_code_filename)) > 75:
            count_worked_files += 1
        else:
            with open(UnworkedProject_filename, 'a') as file:
                file.write(
                    f'-\t[{project_dir}]({project_dir}/{source_code_filename})\n')


def editREADME():
    with open('README.md', 'r') as file:
        content = file.readlines()

    with open('README.md', 'w') as file:
        for line in content:
            if re.match(re_pattern_readme, line):
                file.write(
                    f'{replace_worked_project_badge}\n'.format(count_worked_files=count_worked_files, count_projects=count_projects))
            else:
                file.write(line)


def main():
    listOfProject()
    checkWorkedProject()
    editREADME()


if __name__ == "__main__":
    main()
