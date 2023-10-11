#include <iostream>
using namespace std;

void Nhap(float a[][500], int, int);
void ChanTang(int[][500], int, int);
void LeGiam(int[][500], int, int);
void ChanTangLeGiam(int[][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	ChanTangLeGiam(a, n, m);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void ChanTang(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				swap(b[i], b[j]);

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}

void LeGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				b[k++] = a[i][j];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				swap(b[i], b[j]);

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				a[i][j] = b[k++];
}

void ChanTangLeGiam(int a[][500], int m, int n)
{
	ChanTang(a, m, n);
	LeGiam(a, m, n);
}