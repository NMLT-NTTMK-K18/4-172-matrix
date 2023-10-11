#include <iostream>
using namespace std;

void Nhap(int[][500], int);
void Xuat(int[][500], int);

int main()
{
	int a[500][500];
	int n;
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(int a[][500], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				cout << setw(8) << a[i][j];
}