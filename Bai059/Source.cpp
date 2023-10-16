#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
int TanSuat(float[][500], int, int, float);


int main()
{
	float arr[500][500];
	int m;
	int n;
	float x;

	Nhap(arr, m, n);
	cout << "Nhap gia tri x: ";
	cin >> x;
	cout << "So lan xuat hien cua " << x << " la: " << TanSuat(arr, m, n, x);
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

int TanSuat(float a[][500], int m, int n, float x)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}