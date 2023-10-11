#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
int ktCon(float[][500], int, int, int, int);
int DemCon(float[][500], int, int);

int main()
{
	float a[500][500];
	int m;
	int n;
	cin >> n >> m;
	Nhap(a, m, n);
	int dem = DemCon(a, m, n);
	cout << dem;
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

int ktCon(float a[][500], int m, int n, int vtd, int vtc)
{
	int flag = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (a[vtd + i][vtc + j] <= 0)
				flag = 0;
	return flag;
}

int DemCon(float a[][500], int m, int n)
{
	int dem = 0;
	for (int vtd = 0; vtd <= m - 3; vtd++)
		for (int vtc = 0; vtc <= n - 3; vtc++)
			if (ktCon(a, m, n, vtd, vtc) == 1)
				dem++;
	return dem;
}