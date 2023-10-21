#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
int TonTaiLe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);

	if (TonTaiLe(a, m, n))
		cout << "Ma Tran ton tai gia tri le";
	else
		cout << "Ma Tran khong ton tai gia tri le";
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

int TonTaiLe(int a[][500], int m, int n)
{
	int flag = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 != 0)
				return 1;
	return 0;
}
