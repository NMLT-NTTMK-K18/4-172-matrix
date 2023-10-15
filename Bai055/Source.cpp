#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int DemChan(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	int dem = DemChan(a, m, n);
	cout << dem;
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

int DemChan(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				dem++;
	return dem;
}