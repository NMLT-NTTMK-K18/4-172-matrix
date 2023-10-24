#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
bool KtCucTieu(float[][500], int, int, int, int);
int DemCucTieu(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "So diem cuc tieu la: " << DemCucTieu(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}



bool KtCucTieu(float a[][500], int m, int n, int d, int c)
{
	for (int di = -1; di <= 1; di++)
		for (int dj = -1; dj <= 1; dj++)
			if (d + di >= 0 && d + di < m && c + dj >= 0 && c + dj < n && !(di == 0 && dj == 0) && (a[d + di][c + dj] > a[d][c]))
				return false;
	return true;
}

int DemCucTieu(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtCucTieu(a, m, n, i, j))
				dem++;
	return dem;
}