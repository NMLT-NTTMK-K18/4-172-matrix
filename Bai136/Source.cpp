#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int &, int &);
void XuatNguyenToTang(int[][500], int, int);
void HoanVi(int &, int &);
bool ktnt(int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Cac so nguyen to trong ma tran theo thu tu tang dan:" << endl;
	XuatNguyenToTang(a, m, n);

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

bool ktnt(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	return (dem == 2);
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void XuatNguyenToTang(int a[][500], int m, int n)
{
	int b[500];
	int k;
	int i, j;

	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (ktnt(a[i][j]) == 1)
				b[k++] = a[i][j];

	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);

	for (i = 0; i < k; i++)
		cout << setw(8) << b[i];
}