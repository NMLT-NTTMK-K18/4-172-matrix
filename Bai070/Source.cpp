#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float DemCucDai(float[][500], int, int);
bool ktCucDai(float[][500], int, int, int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	int dem = DemCucDai(a, m, n);
	cout << dem;
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

float DemCucDai(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktCucDai(a, m, n, i, j) == 1)
				dem++;
	return dem;
}

bool ktCucDai(float a[][500], int m, int n, int d, int c)
{
	int di[8] = { -1, -1, -1, 0, 1, 1, 1, 0 };
	int dj[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
	int flag = 1;
	for (int k = 0; k < 8; k++)
		if (d + di[k] >= 0 && d + di[k] < m && c + dj[k] >= 0 && c + dj[k]<n && a[d + di[k]][c + dj[k]] > a[d][c])
			flag = 0;
	return flag;
}