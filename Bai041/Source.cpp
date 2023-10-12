#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
bool ktChinhPhuong(int);
int TongCot(int[][500], int, int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Nhap cot can tinh tong (index): ";
	int k;
	cin >> k;

	cout << "Tong cac so chinh phuong o cot " << k << " la: " << TongCot(a, m, k) << endl;

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

int TongCot(int a[][500], int m, int k)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
		if (ktChinhPhuong(a[i][k]))
			sum += a[i][k];
	return sum;
}