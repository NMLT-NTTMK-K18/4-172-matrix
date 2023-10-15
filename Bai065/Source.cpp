#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int DemGiaTri(int[][500], int, int, int);
bool SoDauChan(int);

int main()
{
	int a[500][500];
	int m, n;
	int c;

	Nhap(a, m, n);
	cout << "Nhap cot: ";
	cin >> c;
	int dem = DemGiaTri(a, m, n, c);
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

int DemGiaTri(int a[][500], int m, int n, int c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (SoDauChan(a[i][c]) == 1)
			dem++;
	return dem;
}

bool SoDauChan(int k)
{
	int t = k;
	while (t >= 10)
		t /= 10;
	if (t % 2 == 0)
		return 1;
	return 0;
}