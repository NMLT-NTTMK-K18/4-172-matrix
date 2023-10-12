#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
int ktHoanThien(int);
int DemHoanThien(int[][500], int, int, int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	int k;
	cout << "Nhap dong thu k (index): ";
	cin >> k;

	cout << "So luong so hoan thien tren dong thu " << k << " la: " << DemHoanThien(a, m, n, k);

	return 0;
}

void Nhap(int a[][500], int &m, int &n)
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

int DemHoanThien(int a[][500], int m, int n, int k)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		dem += ktHoanThien(a[k][j]);
	return dem;
}

int ktHoanThien(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n)
		return 1;
	return 0;
}