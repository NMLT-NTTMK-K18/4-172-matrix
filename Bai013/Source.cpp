#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int);
void LietKeChan(int[][500], int);
int main()
{
	int a[500][500];
	int n;
	cin >> n;
	Nhap(a, n);
	LietKeChan(a, n);
	return 0;
}

void Nhap(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void LietKeChan(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				cout << setw(8) << a[i][j];
}