#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int KtHoanThien(int);
int TonTaiHoanThien(int [][500], int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	if (TonTaiHoanThien(a, n, m))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int KtHoanThien(int n)
{
	int s=0;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			s+=i;
	if (s==n)
		return 1;
	return 0;
}

int TonTaiHoanThien(int a[][500], int n, int m)
{
	int flag =0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (KtHoanThien(a[i][j]) == 1)
				flag = 1;
	if (flag == 1)
		return 1;
	return 0;
}