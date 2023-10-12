#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
int NguyenToDau(int[][500], int, int);
bool ktNguyenTo(int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);

	cout << "So nguyen to dau tien trong ma tran: " << NguyenToDau(a, m, n) << endl;

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

bool ktNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt((float)n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int NguyenToDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktNguyenTo(a[i][j]))
				return a[i][j];
	return -1;
}