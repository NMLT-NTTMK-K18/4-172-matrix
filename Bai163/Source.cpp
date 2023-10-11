#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void Xoay90(float[][500], int &, int &);
void Xoay270(float[][500], int &, int &);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m;
	int n;
	cin >> n >> m;
	Nhap(a, m, n);
	Xoay270(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Xoay90(float a[][500], int &m, int &n)
{
	float b[500][500];
	int k, l;

	k = n;
	l = m;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
			b[i][j] = a[j][n - 1 - i];

	m = k;
	n = l;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[i][j];
}

void Xoay270(float a[][500], int &m, int &n)
{
	Xoay90(a, m, n);
	Xoay90(a, m, n);
	Xoay90(a, m, n);
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}