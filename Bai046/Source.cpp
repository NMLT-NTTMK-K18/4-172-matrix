#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int &, int &);
float TichDuong(float[][500], int, int);
int DemDuong(float[][500], int, int);
float TbnDuong(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Trung binh tich cac so duong: " << setprecision(2) << fixed << TbnDuong(a, m, n) << endl;

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

float TichDuong(float a[][500], int m, int n)
{
	float tich = 1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				tich *= a[i][j];
	return tich;
}

int DemDuong(float a[][500], int m, int n)
{
	int cnt = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				cnt++;
	return cnt;
}

float TbnDuong(float a[][500], int m, int n)
{
	return pow(TichDuong(a, m, n), (float)1 / DemDuong(a, m, n));
}