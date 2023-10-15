#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int TongCot(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	int c;

	Nhap(a, m, n);
	cout << "Nhap cot: ";
	cin >> c;
	int s = TongCot(a, m, n, c);
	cout << s;
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

int TongCot(int a[][500], int m, int n, int c)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		if (a[i][c] % 2 != 0)
			s += a[i][c];
	return s;
}