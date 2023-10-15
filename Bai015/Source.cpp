#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void LietKe(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	int d;

	Nhap(a, m, n);
	cout << "Nhap dong: ";
	cin >> d;
	LietKe(a, m, n, d);
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

void LietKe(int a[][500], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			cout << fixed << a[d][j] << setw(10);
}