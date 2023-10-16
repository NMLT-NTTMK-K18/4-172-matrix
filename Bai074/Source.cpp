#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
int ChanDau(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "So chan dau tien: " << ChanDau(arr, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

int ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				return a[i][j];
	return -1;
}