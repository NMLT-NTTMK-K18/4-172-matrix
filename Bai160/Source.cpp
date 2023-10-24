#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void DichTrai(float[], int);
void DichTraiBien(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	DichTraiBien(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}

void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i < n - 1; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}

void DichTraiBien(float a[][500],int m,int n)
{
	float b[500];
	int k;
	int i,j;
	k = 0;
	for(j=0;j<=n-2;j++)
		b[k++] = a[0][j];
	for(i=0;i<=m-2;i++)
		b[k++] = a[i][n-1];
	for(j=n-1;j>=1;j--)
		b[k++] = a[m-1][j];
	for(i=m-1;i>=1;i--)
		b[k++] = a[i][0];
	DichTrai(b,k);
	k = 0;
	for(j=0;j<=n-2;j++)
		a[0][j] = b[k++];
	for(i=0;i<=m-2;i++)
		a[i][n-1] = b[k++];
	for(j=n-1;j>=1;j--)
		a[m-1][j] = b[k++];
	for(i=m-1;i>=1;i--)
		a[i][0] = b[k++];
}