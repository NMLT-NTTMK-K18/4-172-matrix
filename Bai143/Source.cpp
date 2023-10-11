#include <iostream>
#include <cmath>
using namespace std;

void NhapMang(int[][500], int, int);
int ktNguyenTo(int);
int ktChinhPhuong(int);
void XoaDong(int[][500], int &, int, int);
void ThucHienXoaDong(int[][500], int, int, int &);
void XuatMang(int[][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	NhapMang(a, n, m);
	XuatMang(a, n, m);
	return 0;
}

void NhapMang(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int ktNguyenTo(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int ktChinhPhuong(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= n; i++)
		if (i * i == n)
			return 1;
	return 0;
}

void XoaDong(int a[][500], int &k, int n, int m)
{
	for (int i = k; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = a[i + 1][j];
}

int ktDong(int a[][500], int m, int n, int d)
{
	int flag1 = 0;
	int flag2 = 0;
	for (int j = 0; j < n; j++)
	{
		if (ktNguyenTo(a[d][j]))
			flag1 = 1;
		if (ktChinhPhuong(a[d][j]))
			flag2 = 1;
	}
	return flag1 * flag2;
}

void ThucHienXoaDong(int a[][500], int n, int m, int &dem)
{
	dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (ktDong(a, m, n, i))
			{
				XoaDong(a, n, n, m);
				dem++;
			}
}

void XuatMang(int a[][500], int n, int m, int dem)
{
	for (int i = 0; i < n - dem; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
