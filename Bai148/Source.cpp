#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void ThemCot(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	Nhap(a, n, m);
	ThemCot(a, n, m, k);
	Xuat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void ThemCot(float a[][500], int n, int m, int k)
{
	for (int i = 0; i < n + 1; i++)
		for (int j = k; j < m + 1; j++)
			a[i][j] = a[i][j + 1];
	for (int i = 0; i < n; i++)
		a[i][k] = 0;
}

void Xuat(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)

		for (int j = 0; j < m + 1; j++)
		{
			cout << a[i][j] << " ";
			cout << endl;
		}
}
