#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
int ChanDau(int[][500], int, int);
int DemChanNhoNhat(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);

	cout << "So luong gia tri chan nho nhat trong mang: " << DemChanNhoNhat(a, m, n) << endl;

	return 0;
}

void Nhap(int a[][500], int &m, int &n)
{
	cout << "Nhap so dong: ";
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

int ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				return a[i][j];
	return -1;
}

int DemChanNhoNhat(int a[][500], int m, int n)
{
	int min_even = ChanDau(a, m, n);
	if (min_even == -1)
		return 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] % 2 == 0) && (a[i][j] < min_even))
				min_even = a[i][j];
	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			count += (a[i][j] == min_even);
	return count;
}