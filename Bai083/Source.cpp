#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void DuongNhoNhat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	DuongNhoNhat(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void DuongNhoNhat(float a[][500], int n, int m)
{
	float min = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] < min || a[i][j] > 0)
				min = a[i][j];
	cout << min;
}