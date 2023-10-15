#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int ChinhPhuongDau(int[][500], int, int);
int ChinhPhuongLonNhat(int[][500], int, int);
bool ChinhPhuong(int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	int cpln = ChinhPhuongLonNhat(a, m, n);
	cout << cpln;
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

bool ChinhPhuong(int k)
{
	bool flag = 0;
	for (int i = 0; i <= k; i++)
		if (i * i == k)
			flag = 1;
	return flag;
}

int ChinhPhuongDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ChinhPhuong(a[i][j]) == 1)
				return a[i][j];
}

int ChinhPhuongLonNhat(int a[][500], int m, int n)
{
	int cpln = ChinhPhuongDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ChinhPhuong(a[i][j]) == 1 && a[i][j] > cpln)
				cpln = a[i][j];
	return cpln;
}