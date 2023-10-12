#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[][500], int, int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Tong cac so chinh phuong nam tren dong / cot co chi so le: " << TongChinhPhuong(a, m, n) << endl;

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

bool ktChinhPhuong(int n)
{
	if (n < 0)
		return false;
	for (int i = 0; i <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int TongChinhPhuong(int a[][500], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
		if (i % 2 == 0)
			for (int j = 1; j < n; j += 2)
			{
				if (ktChinhPhuong(a[i][j]))
					sum += a[i][j];
			}
		else
			for (int j = 0; j < n; j++)
				if (ktChinhPhuong(a[i][j]))
					sum += a[i][j];
	return sum;
}