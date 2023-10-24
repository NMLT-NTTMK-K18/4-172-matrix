#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
int ktDong(float[][500], int, int, int); 
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

int ktDong(float a[][500], int m, int n, int x)
{
	int flag = 1;
	for (int j = 0; j < n; j++)
		if (a[x][j] >= 0)
			flag = 0;
	return flag;
}

void LietKe(float a[][500], int m, int n)
{
	cout << "Cac dong toan am la: ";
	for (int i = 0; i < m; i++)
			if (ktDong(a, m, n, i))
				cout << i<<setw(5);
}



