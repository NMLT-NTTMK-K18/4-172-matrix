#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
bool ktCotGiamDan(float [][500], int , int , int );
bool ktDongGiamDan(float[][500], int, int, int);
int ktGiam(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);

	if (ktGiam(a,m,n))
		cout << "Ma Tran Giam Dan";
	else
		cout << "Ma Tran Khong Giam Dan";
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

bool ktCotGiamDan(float a[][500], int m, int n, int c)
{
	float lc = a[0][c];
	for (int i = 1; i < m; i++)
	{
		if (a[i][c] >= lc)
			return false;
		lc = a[i][c];
	}
	return true;
}

bool ktDongGiamDan(float a[][500], int m, int n, int d)
{
	float lc = a[d][0];
	for (int i = 1; i < n; i++)
	{
		if (a[d][i] >= lc)
			return false;
		lc = a[d][i];
	}
	return true;
}

int ktGiam(float a [][500], int m, int n)
{
	int flag = 1;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (!(ktDongGiamDan(a, m, n, i) && ktCotGiamDan(a, m, n, j)))
				flag = 0;
		}
	return flag;
}
