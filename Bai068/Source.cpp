#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int DemChuSo(int);
void SoChuSO(int[][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	SoChuSO(a, n, m);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int DemChuSo(int n)
{
	int dem = 0;
	while (n != 0)
	{
		dem++;
		n /= 10;
	}
	return dem;
}

void SoChuSO(int a[][500], int n, int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			dem += DemChuSo(a[i][j]);
	cout << dem;
}