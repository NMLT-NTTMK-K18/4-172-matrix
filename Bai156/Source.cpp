#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
void DichLenCot(float[][500], int, int, int);
void DichLen(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	DichLen(a, m, n);
	cout << "Ma tran sau khi dich len: " << endl;
	Xuat(a, m, n);

	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

void DichLenCot(float a[][500], int m, int n, int c)
{
	float temp = a[0][c];
	for (int i = 0; i <= m - 2; i++)
		a[i][c] = a[i + 1][c];
	a[m - 1][c] = temp;
}

void DichLen(float a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		DichLenCot(a, m, n, j);
}