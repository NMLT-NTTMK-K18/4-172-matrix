#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int ktChinhPhuong(int);
void TongChinhPhuong(int[][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	TongChinhPhuong(a, n, m);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int ktChinhPhuong(int a)
{
	int flag = 0;
	for (int i = 0; i <= a; i++)
		if (a == pow(i, 2))
			flag = 1;
	return flag;
}

void TongChinhPhuong(int a[][500], int n, int m)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (ktChinhPhuong(a[i][j]))
				s += a[i][j];
	cout << s;
}
