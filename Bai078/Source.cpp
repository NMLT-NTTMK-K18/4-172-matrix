#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void NhoNhatCot(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	Nhap(a, n, m);
	NhoNhatCot(a, n, m, k);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void NhoNhatCot(float a[][500], int n, int m, int k)
{
	float min = a[0][k];
	for (int i = 0; i < n; i++)
		if (a[i][k] > min)
			min = a[i][k];
	cout << min;
}