#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int &, int &);
void Hoanvi(int &, int &);
void XuatChanGiam(int[][500], int, int);

int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	XuatChanGiam(arr, m, n);
	return 0;
}

void Nhap(int a[][500], int &m, int &n)
{
	cout << "Nhap so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

void Hoanvi(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void XuatChanGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;

	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];
	for (int i = 0; i <= k - 2; i++)
		for (int j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				Hoanvi(b[i], b[j]);

	for (int i = 0; i < k; i++)
		cout << endl
			 << b[i];
}