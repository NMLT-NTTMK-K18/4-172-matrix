#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
int ktCot(float[][500], int, int, int);
void XoaCot(float[][500], int, int &, int);
void XoaCot(float[][500], int, int &);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	XoaCot(a, m, n);
	cout << "Ma tran sau khi da xoa cac dong khac toan am: " << endl;
	Xuat(a, m, n);

	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

int ktCot(float a[][500], int m, int n, int column)
{
	for (int i = 0; i < m; i++)
		if (a[i][column] > 0)
			return 0;
	return 1;
}

void XoaCot(float a[][500], int m, int &n, int column)
{
	for (int i = 0; i < m; i++)
		for (int j = column; j < n - 1; j++)
			a[i][j] = a[i][j + 1];
	n--;
}

void XoaCot(float a[][500], int m, int &n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j) == 1)
		{
			j--;
			XoaCot(a, m, n, j);
		}
}