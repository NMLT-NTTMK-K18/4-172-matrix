#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void XayDung(float[][500], int, int, float[][500], int&, int&);

int main()
{
	float a[50][500];
	float b[60][500];
	int  m, n,k,l;
	Nhap(a, m, n);
	XayDung(a, m, n, b, k, l);
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

void SapCotTang(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] > a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
void SapCotGiam(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
void SapXep(float a[][500], int m, int n)
{
	for (int j = 0; j <= n - 1; j++)
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
}