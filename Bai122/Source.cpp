#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&,int&);
void SapDongTang(float[][500], int, int, int);
void HoanVi(float &,float&);

int main()
{
	float a[50][500];
	int m, n, d;
	Nhap(a, m, n,d);
	SapDongTang(a, m, n, d);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,int& d)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	cout << "Nhap dong can sap xep: ";
	cin >> d;
}
void HoanVi(float& a,float& b)
{
	float temp = a;
	a=b;
	b=temp;
}

void SapDongTang(float a[][500], int m, int n,int d)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[d][i] > a[d][j])
				HoanVi(a[d][i], a[d][j]);
	cout << "Dong " << d << " duoc sap xep lai la: ";
	for (int i = 0; i < n; i++)
		cout << a[d][i] << setw(5);
}



