#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int, int);
void LietKeChan(int[][500], int, int);
int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	Nhap(a, n, m);
	LietKeChan(a, n, m);
	return 0;
}

void Nhap(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void LietKeChan(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] % 2 == 0)
				cout << setw(8) << a[i][j];
}