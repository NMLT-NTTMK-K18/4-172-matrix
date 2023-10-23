#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[][500], int&, int&);
int DemDong(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

int DemDong(int a[][500], int m, int n, int d)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			dem++;
	return dem;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
		lc = DemDong(a, m, n, i);
		return lc;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "Cac dong co nhieu so chan nhat la: ";
	int dem = DemLonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == dem)
			cout << i << setw(5);
}