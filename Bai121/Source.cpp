#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
void HoanViCot(float[][500], int, int, int, int);
void HoanVi(float &, float &);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	int c1, c2;
	cout << "Nhap cot 1: ";
	cin >> c1;
	cout << "Nhap cot 2: ";
	cin >> c2;

	cout << "Array sau khi hoan vi cot " << c1 << " va cot " << c2 << ":" << endl;
	HoanViCot(a, m, n, c1, c2);

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

void HoanVi(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

void HoanViCot(float a[][500], int m, int n, int c1, int c2)
{
	for (int i = 0; i < m; i++)
		HoanVi(a[i][c1], a[i][c2]);
}
