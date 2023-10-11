#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
float LonNhatCot(float[][500], int, int, int);
void XayDung(float[][500], int, int, float[][500], int &, int &);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	int k, l;
	cin >> n >> m;
	Nhap(a, n, m);
	XayDung(a, n, m, a, k, l);
	Xuat(a, k, l);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

float LonNhatDong(float a[][500], int m, int n, int d)

{
	float lc = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > lc)
			lc = a[d][j];
	return lc;
}

float LonNhatCot(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 0; i < m; i++)
		if (a[i][c] > lc)
			lc = a[i][c];
	return lc;
}

void XayDung(float a[][500], int m, int n, float b[][500], int &k, int &l)
{
	k = m;
	l = n;
	for (int i = 0; i < k; i++)
		for (int j = 0; j < l; j++)
		{
			float lnd = LonNhatDong(a, m, n, i);
			float lnc = LonNhatCot(a, m, n, j);
			if (lnd < lnc)
				b[i][j] = lnc;
			else
				b[i][j] = lnd;
		}
}

void Xuat(float b[][500], int k, int l)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
}