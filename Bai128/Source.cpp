#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void HoanViDong(float[][500], int, int, int, int);
float TongDong(float[][500], int, int, int);
void SapXep(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	SapXep(a, n, m);
	Xuat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void HoanViDong(float a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		swap(a[d1][j], a[d2][j]);
}
float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}
void SapTang(float a[][500], int m, int n)
{

	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (TongDong(a, m, n, i) >
				TongDong(a, m, n, j))
				HoanViDong(a, m, n, i, j);
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}