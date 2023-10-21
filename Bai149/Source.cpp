#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
float LonNhatCot(float[][500], int, int, int);
void ThemDong(float[][500], int&, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	ThemDong(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

float LonNhatCot(float a[][500], int m, int n, int col)
{
	float lc = a[0][col];
	for (int i = 0; i < m; i++)
		if (a[i][col] > lc)
			lc = a[i][col];
	return lc;
}

void ThemDong(float a[][500], int& m, int n)
{
	m++;
	for (int j = 0; j < n; j++)
		a[m - 1][j] = LonNhatCot(a, m, n, j);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << setprecision(4) << fixed;
			cout << "a[" << i << "][" << j << "] = " << a[i][j];
		}
}