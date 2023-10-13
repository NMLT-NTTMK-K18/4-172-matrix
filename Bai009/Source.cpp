#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
void Lietke(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	Lietke(arr, m, n);
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

void Lietke(int a[][500], int m, int n)
{
	cout << "Cac gia tri chia het cho 2: \n";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				cout << setw(8) << a[i][j];
}
