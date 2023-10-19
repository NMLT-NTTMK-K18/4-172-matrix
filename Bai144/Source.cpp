#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int &, int &);
bool KtCot(float[][500], int, int, int);
void XoaCot(float[][500], int, int &, int);
void XoaCot(float[][500], int, int &);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	XoaCot(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

bool KtCot(float a[][500], int m, int n, int col)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][col] * a[j][col] < 0)
				return true;
	return false;
}

void XoaCot(float a[][500], int m, int &n, int col)
{
	for (int i = 0; i < m; i++)
		for (int j = col; j < n - 2; j++)
			a[i][j] = a[i][j + 1];
	n--;
}

void XoaCot(float a[][500], int m, int &n)
{
	for (int j = 0; j < n; j++)
		if (KtCot(a, m, n, j))
			XoaCot(a, m, n, j);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << endl
				 << "a[" << i << "][" << j << "] : " << a[i][j];
}
