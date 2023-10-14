#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&, int&);
int TichCot(int[][500], int, int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;
	int col;

	Nhap(arr, m, n, col);
	cout << "Tich cac so chan tren cot " << col << " = " << TichCot(arr, m, n, col);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& col)
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
	cout << "Cot muon tinh tich cac so chan: ";
	cin >> col;
}

int TichCot(int a[500][500], int m, int n, int col)
{
	int t = 1;
	for (int i = 0; i < m; i++)
		if (a[i][col] % 2 == 0)
			t = t * a[i][col];
	return t;
}