#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int&, int&);
int DemChuSo(int);
int DemCot(int[][100], int, int, int);
int DemLonNhat(int[][100], int, int);
void LietKe(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;

	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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

int DemChuSo(int k)
{
	int t = k;
	int dem = 0;
	while (t != 0)
	{
		t /= 10;
		dem++;
	}
	return dem;
}

int DemCot(int a[][100], int m, int n, int c)
{
	int demlnc = DemChuSo(a[0][c]);
	for (int i = 0; i < m; i++)
		if (DemChuSo(a[i][c]) > demlnc)
			demlnc = DemChuSo(a[i][c]);
	return demlnc;
}

int DemLonNhat(int a[][100], int m, int n)
{
	int demln = DemChuSo(a[0][0]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (DemChuSo(a[i][j]) > demln)
				demln = DemChuSo(a[i][j]);
	return demln;
}

void LietKe(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (DemLonNhat(a, m, n) == DemCot(a, m, n, j))
			cout << j << setw(10);
}