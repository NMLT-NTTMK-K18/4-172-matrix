#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
void DichPhai(float[], int);
void DichPhaiBien(float[][500], int, int);


int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	DichPhaiBien(arr, m, n);
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

void DichPhai(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1; i >= 0; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}

void DichPhaiBien(float a[][500], int m, int n)
{
	float b[500];
	int k = 0;
	int i, j;

	for (j = 0; j <= n - 2; j++)
		b[k++] = a[0][j];
	for (i = 0; i <= m - 2; i++)
		b[k++] = a[i][n - 1];
	for (j = n - 1; j >= 1; j--)
		b[k++] = a[m - 1][j];
	for (i = m - 1; i >= 1; i--)
		b[k++] = a[i][0];

	DichPhai(b, k);

	k = 0;
	for (j = 0; j <= n - 2; j++)
		a[0][j] = b[k++];
	for (i = 0; i <= m - 2; i++)
		a[i][n - 1] = b[k++];
	for (j = n - 1; j >= 1; j--)
		a[m - 1][j] = b[k++];
	for (i = m - 1; i >= 1; i--)
		a[i][0] = b[k++];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << setw(6) << setprecision(4) << fixed;
			cout << "a[" << i << "][" << j << "] = " << a[i][j];
		}
}