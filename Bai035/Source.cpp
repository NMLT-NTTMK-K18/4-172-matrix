#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
bool DoiXung(int);
int TongDong(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int m, n;
	int d;

	Nhap(a, m, n);
	cout << "Nhap dong: ";
	cin >> d;
	int s = TongDong(a, m, n, d);
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

int TongDong(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (DoiXung(a[d][j]) == 1)
			s += a[d][j];
	return s;
}

bool DoiXung(int k)
{
	k = abs(k);
	int dn = 0;
	for (int t = k; t != 0; t /= 10)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
	}
	if (dn == k)
		return 1;
	return 0;
}