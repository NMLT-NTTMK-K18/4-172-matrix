#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void DichTraiDong(float[][500], int, int, int);
void DichTrai(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);
	DichTrai(a, m, n);
	cout << "Ma tran sau khi da dich trai: " << endl;
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

void DichTraiDong(float a[][500],int m, int n, int d)
{
	float temp = a[d][0];
	for (int j = 0; j <= n - 2; j++)
		a[d][j] = a[d][j + 1];
	a[d][n - 1] = temp;
}
void DichTrai(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		 DichTraiDong(a, m, n, i);
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