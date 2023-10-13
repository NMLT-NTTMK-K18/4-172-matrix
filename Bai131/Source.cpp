#include <iostream>
using namespace std;

void Nhap(int[][500], int &, int &);
void Xuat(int[][500], int, int);
void ChanGiam(int[][500], int, int);
void HoanVi(int &, int &);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	ChanGiam(a, m, n);
	cout << "Array sau khi sap xep:" << endl;
	cout << "\t- Cac phan tu chan cac so nguyen giam dan theo hang va cot bang phuong phap su dung mang phu:" << endl;
	Xuat(a, m, n);

	return 0;
}

void Nhap(int a[][500], int &m, int &n)
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

void Xuat(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void ChanGiam(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				b[k++] = a[i][j];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] < b[j])
				HoanVi(b[i], b[j]);

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] % 2 == 0)
				a[i][j] = b[k++];
}
