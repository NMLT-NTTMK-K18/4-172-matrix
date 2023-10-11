#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int, int);
void TichDuongCot(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	Nhap(a, n, m);
	TichDuongCot(a, n, m, k);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void TichDuongCot(float a[][500], int n, int m, int k)
{
	float t = 1;
	for (int i = 0; i < n; i++)
		if (a[i][k] > 0)
			t *= a[i][k];
	cout << t;
}