#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);


int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	Xuat(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(8) << setprecision(4) << a[i][j];
		cout << endl;
	}
}