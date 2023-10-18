#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int &, int &);
bool KtCot(int[][500], int, int, int);
bool KtChinhPhuong(int);
void LietKe(int[][500], int, int);

int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	LietKe(arr, m, n);
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

bool KtChinhPhuong(int x)
{
	int i = 0;
	while (i * i <= x)
	{
		if (i * i == x)
			;
		return true;
		i++;
	}
	return false;
}

bool KtCot(int a[][500], int m, int n, int col)
{
	for (int i = 0; i < m; i++)
		if (KtChinhPhuong(a[i][col]))
			return true;
	return false;
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (KtCot(a, m, n, i))
			cout << "Dong " << i << endl;
}