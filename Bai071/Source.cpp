#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int DemCucTri(float[][500], int, int);
int ktCucTieu(float[][500], int, int, int, int);
int ktCucDai(float[][500], int, int, int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "So dieu cuc tri trong ma tran: " << DemCucTri(a, m, n) << endl;

	return 0;
}

void Nhap(float a[][500], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int ktCucTieu(float a[][500], int m, int n, int i, int j)
{
	if (i != 0)
		if (a[i][j] >= a[i - 1][j])
			return 0;
	if (i != m - 1)
		if (a[i][j] >= a[i + 1][j])
			return 0;
	if (j != 0)
		if (a[i][j] >= a[i][j - 1])
			return 0;
	if (j != n - 1)
		if (a[i][j] >= a[i][j + 1])
			return 0;
	return 1;
}

int ktCucDai(float a[][500], int m, int n, int i, int j)
{
	if (i != 0)
		if (a[i][j] <= a[i - 1][j])
			return 0;
	if (i != m - 1)
		if (a[i][j] <= a[i + 1][j])
			return 0;
	if (j != 0)
		if (a[i][j] <= a[i][j - 1])
			return 0;
	if (j != n - 1)
		if (a[i][j] <= a[i][j + 1])
			return 0;
	return 1;
}

int DemCucTri(float a[][500], int m, int n)
{
	int cnt = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j) || ktCucDai(a, m, n, i, j))
				cnt++;
}