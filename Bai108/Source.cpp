#include <iostream>
using namespace std;

void Nhap(int[][500], int, int);
int ktDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);
int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	LietKe(a, n, m);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int ktDong(int a[][500], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			flag = 1;
	return flag;
}

int ktDong(int a[][500], int m, int n, int d)
{
	int flag = 0;
	for (int j = 0; j < n; j++)
		if (a[d][j] % 2 == 0)
			flag = 1;
	return flag;
}