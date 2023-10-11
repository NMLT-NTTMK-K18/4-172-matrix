#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void LonNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	LonNhat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void LonNhat(float a[][500], int n, int m)
{
	float max = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] > max)
				max = a[i][j];
	cout << max;
}