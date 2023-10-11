#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int, int);
void LietKeChanCot(int[][500], int, int, int);

int main()
{
	int a[500][500];
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	Nhap(a, n, m);
	LietKeChanCot(a, n, m, k);
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
	for (int i = 0; i < n; i++)
		if (a[i][k] % 2 == 0)
			cout << setw(8) << a[i][k];
}