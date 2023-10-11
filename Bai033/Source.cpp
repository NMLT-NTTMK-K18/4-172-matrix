#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int, int);
void TongChanDong(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	Nhap(a, n, m);
	TongChanDong(a, n, m, k);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void LietKeChanCot(int a[][500], int n, int m, int k)
{
	int s = 0;
	for (int i = 0; i < n; i++)
		if (a[k][i] % 2 == 0)
			s += a[k][i];
	cout << s;
}