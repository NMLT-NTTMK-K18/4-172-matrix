#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void SapDongGiam(float[][500], int, int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	for (int i = 0; i < n; i++)
		SapDongGiam(a, n, m, i);
	Xuat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void SapDongGiam(float a[][500], int n, int m, int d)
{
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][d] < a[j][d])
				swap(a[i][d], a[j][d]);
}

void Xuat(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
}
