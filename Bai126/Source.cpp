#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
void SapDongTang(float[][500], int, int, int);
void SapDongGiam(float[][500], int, int, int);
void SapXep(float[][500], int, int);
void HoanVi(float &, float &);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	SapXep(a, m, n);
	cout << "Array sau khi sap xep:" << endl;
	cout << "\t- Dong co chi so chan tang dan\n\t- Dong co chi so le giam dan" << endl;
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

void HoanVi(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapDongTang(float a[][500], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
}

void SapDongGiam(float a[][500], int m, int n, int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] < a[d][j])
				HoanVi(a[d][i], a[d][j]);
}

void SapXep(float a[][500], int m, int n)
{
	for (int i = 0; i <= m - 1; i++)
		if (i % 2 == 0)
			SapDongTang(a, m, n, i);
		else
			SapDongGiam(a, m, n, i);
}