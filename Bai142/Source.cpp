#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void XoaCot(float[][500], int, int&, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	int k;
	cout << "Nhap cot k (index): ";
	cin >> k;

	cout << "Ma tran sau khi da xoa cot " << k << " :" << endl;
	XoaCot(a, m, n, k);
	Xuat(a, m, n);

	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

void XoaCot(float a[][500], int m, int& n, int k)
{
	for (int i = 0; i < m ; i++)
		for (int j = k; j < n-1; j++)
			a[i][j] = a[i ][j+1];
	n--;
}
