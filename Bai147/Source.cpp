#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void ThemDong(float[][500], int&, int, int );
int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k (index): ";
	cin >> k;

	cout << "Ma tran sau khi da them +1 vao dong " << k << " :" << endl;
	ThemDong(a, m, n, k);
	Xuat(a, m, n);

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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

void ThemDong(float a[][500], int& m, int n, int d)
{
	for(int i=d;i<m+1;i++)
		for (int j = 0; j < n; j++)
		{
			a[i + 1][j] = a[i][j];
		}
	m++;
	for (int j = 0; j < n; j++)
		a[d][j] = 1;
}