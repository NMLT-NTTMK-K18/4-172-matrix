#include <iostream>
using namespace std;
void Nhap(int[][500], int&, int&);
bool KtDang5m(int);
void Tong5mTrenBien(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m, n;

	Nhap(arr, m, n);
	Tong5mTrenBien(arr, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for(int i =0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

bool KtDang5m(int x)
{
	if (x <= 0)
		return false;
	int t = x;
	int dv = 0;
	while (t > 1)
	{
		dv = t % 5;
		if (dv != 0)
			return false;
		t = t / 5;
	}
	return true;
}

void Tong5mTrenBien(int a[][500], int m, int n)
{
	if (m < 2 && n < 2)
		cout << "Ma tran khong co bien";

	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (KtDang5m(a[i][0]))
			s = s + a[i][0];
		if (KtDang5m(a[i][n - 1]))
			s = s + a[i][n - 1];
	}

	for (int j = 0; j < n; j++)
	{
		if (KtDang5m(a[0][j]))
			s = s + a[0][j];
		if (KtDang5m(a[m - 1][j]))
			s = s + a[m - 1][j];
	}

	cout << "Tong cac gia tri co dang 5^m tren duong bien cua ma tran la: " << s;
}