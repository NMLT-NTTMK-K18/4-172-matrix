#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
bool ktDang(int);
void LietKe(int[][500], int, int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << endl;

	int row;
	cout << "Kiem tra dang 3^m hang thu (index): ";
	cin >> row;

	LietKe(a, n, row);
	return 0;
}

void Nhap(int a[][500], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

bool ktDang(int k)
{
	if (k < 1)
		return false;
	bool flag = true;
	for (int t = k; t > 1; t = t / 3)
		if (t % 3 != 0)
			flag = false;
	return flag;
}

void LietKe(int a[][500], int n, int row)
{
	cout << "Cac so co dang 3^m:" << endl;
	for (int j = 0; j < n; j++)
		if (ktDang(a[row][j]))
			cout << a[row][j] << '\t';
}