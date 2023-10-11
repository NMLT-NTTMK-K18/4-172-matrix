#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int Kt5mtrendong(int);
void Tong5m(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	int k;
	cin >> k;
	Nhap(a, n, m);
	Tong5m(a, n, m, k);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int Kt5mtrendong(int a)
{
	int flag = 0;
	for (int i = 0; i <= a; i++)
		if (a == pow(5, i))
			flag = 1;
	return flag;
}

void Tong5m(int a[][500], int n, int m, int k)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		if (Kt5m(a[k][i]))
			s += a[k][i];
	cout << s;
}
