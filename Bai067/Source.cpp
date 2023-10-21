#include <iostream>
#include<cmath>
using namespace std;

void Nhap(int[][500], int&, int&);
bool ktChinhPhuong(int);
int DemChinhPhuongBien(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n, d;

	Nhap(a, m, n);
	cout << "So luong chinh phuong tren bien la: " << DemChinhPhuongBien(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool ktChinhPhuong(int a)
{
	for (int i = 1; pow(i, 2) <= a; i++)
		if (pow(i, 2) == a)
			return true;
	return false;
}

int DemChinhPhuongBien(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (i == 0 || j == 0 || i == m - 1 || j == n - 1 && ktChinhPhuong(a[i][j]))
				dem++;
	}
	return dem;
}
