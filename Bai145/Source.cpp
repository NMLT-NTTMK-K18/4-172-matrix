#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void Xuat(int[][500], int, int);
bool ktDong(int[][500], int, int, int);
void XoaDong(int[][500], int&, int, int);
void XoaDong(int[][500], int&, int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	XoaDong(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
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

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

bool ktDong(int a[][500], int m, int n, int d)
{
	bool flag = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 != 0)
			flag = 0;
	return flag;
}

void XoaDong(int a[][500], int& m, int n, int d)
{
	for (int j = 0; j < n; j++)
		for (int i = d; i < m - 1; i++)
			a[i][j] = a[i + 1][j];
	m--;
}

void XoaDong(int a[][500], int& m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i) == 1)
			XoaDong(a, m, n, i);
}