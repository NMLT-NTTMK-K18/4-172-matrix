#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
void Hoanvi(float&, float&);
void DaoDong(float[][500], int, int, int);
void ChieuGuongDoc(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	ChieuGuongDoc(arr, m, n);
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

void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void DaoDong(float a[][500], int m, int n, int row)
{
	int n0 = 0;
	int nn = n - 1;
	while (n0 < nn)
	{
		Hoanvi(a[row][n0], a[row][nn]);
		n0++;
		nn--;
	}
}

void ChieuGuongDoc(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		DaoDong(a, m, n, i);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << setprecision(4) << fixed;
			cout << "a[" << i << "][" << j << "] = " << a[i][j];
		}
}