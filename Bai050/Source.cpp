#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongCucDai(float[][500], int, int);
bool CucDai(float[][500], int, int, int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	int s = TongCucDai(a, m, n);
	cout << s;
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
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

float TongCucDai(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (CucDai(a, m, n, i, j) == 1)
				s += a[i][j];
	return s;
}

bool CucDai(float a[][500], int m, int n, int d, int c)
{
	int di[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
	int dj[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k]<n && a[d + di[k]][c + dj[k]] > a[d][c])
			flag = 0;
	return flag;
}