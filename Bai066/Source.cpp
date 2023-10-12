#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int DemDuongBien(float[][500], int, int);
bool ktBien(int, int, int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "So luong so duon tai bien: " << DemDuongBien(a, m, n);

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

bool ktBien(int m, int n, int i, int j)
{
	if (i == 0 || i == m - 1 || j == 0 || j == n - 1)
		return true;
	return false;
}

int DemDuongBien(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktBien(m, n, i, j))
				if (a[i][j] > 0)
					dem++;
	return dem;
}