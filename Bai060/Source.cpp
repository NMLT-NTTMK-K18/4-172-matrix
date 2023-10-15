#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
int DemDuongDong(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n;
	int d;

	Nhap(a, m, n);
	cout << "Nhap dong: ";
	cin >> d;
	int dem = DemDuongDong(a, m, n, d);
	cout << dem;
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
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

int DemDuongDong(float a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] >= 0)
			dem++;
	return dem;
}