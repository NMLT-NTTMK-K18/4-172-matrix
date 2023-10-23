#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongCucTieu(float[][500], int, int);
float TongCucDai(float[][500], int, int);
int ktCucDai(float[][500], int, int, int, int); 
int ktCucTieu(float[][500], int, int, int, int);
float TongCucTri(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Tong cac phan tu cuc tri trong ma tran: " << TongCucTri(a, m, n);
	cout << endl;
	cout << TongCucTieu(a, m, n);

	cout << endl;
	cout << TongCucDai(a, m, n);
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

float TongCucTieu(float a[][500], int m, int n)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucTieu(a, m, n, i, j))
				sum += a[i][j];
	return sum;
}

int ktCucTieu(float a[][500], int m, int n, int d, int c)
{
	int flag = 1;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m &&
				c + dj >= 0 && c + dj < n &&
				!(di == 0 && dj == 0) &&
				a[d + di][c + dj] < a[d][c])
				flag = 0;
	return flag;
}

float TongCucDai(float a[][500], int m, int n)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucDai(a, m, n, i, j))
				sum += a[i][j];
	return sum;
}

int ktCucDai(float a[][500], int m, int n, int d, int c)
{
	int flag = 1;
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m &&
				c + dj >= 0 && c + dj < n &&
				!(di == 0 && dj == 0) &&
				a[d + di][c + dj] > a[d][c])
				flag = 0;
	return flag;
}

float TongCucTri(float a[][500], int m, int n)
{
	float s = TongCucDai(a, m, n) + TongCucTieu(a, m, n);
	return s;
}