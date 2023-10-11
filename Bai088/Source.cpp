#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	int d;
	cin >> d;
	Nhap(a, n, m);
	cout << TongLonNhat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[d][j];
	return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
	float lc = TongDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) > lc)
			lc = TongDong(a, m, n, i);
	return lc;
}