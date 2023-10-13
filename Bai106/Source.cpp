#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int ktCotGiam(float[][500], int, int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k (index): ";
	cin >> k;

	if (ktCotGiam(a, m, n, k))
		cout << "Cot " << k << " giam dan" << endl;
	else
		cout << "Cot " << k << " khong giam dan" << endl;

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

int ktCotGiam(float a[][500], int m, int n, int column)
{
	for (int i = 0; i < m - 1; i++)
		if (a[i][column] < a[i + 1][column])
			return 0;
	return 1;
}