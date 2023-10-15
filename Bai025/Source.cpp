#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int TichLe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	int t = TichLe(a, m, n);
	cout << t;
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

int TichLe(int a[][500], int m, int n)
{
	int t = 1;
	for (int i = 0; i < m; i += 2)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				t *= a[i][j];
	return t;
}