#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int Kt2m(int);
void Dem2m(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	int k;
	cin >> k;
	Nhap(a, n, m);
	Dem2m(a, n, m, k);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int Kt2m(int a)
{
	int flag = 0;
	for (int i = 0; i <= a; i++)
		if (a == pow(2, i))
			flag = 1;
	return flag;
}

void Dem2m(int a[][500], int n, int m)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Kt2m(a[i][j]))
				s += 1;
	cout << s;
}
