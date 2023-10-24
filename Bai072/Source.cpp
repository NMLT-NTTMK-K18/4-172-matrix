#include <iostream>
using namespace std;

void Nhap(float [][500], int&, int&);
int DemPhanBiet(float[][500], int, int);

int main()
{
	float a[500][500];
		int m, n;
		Nhap(a, m, n);
		cout << "So phan tu phan biet trong ma tran la: " << DemPhanBiet(a, m, n);
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

int DemPhanBiet(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = m-1; i>=0; i--)
		for (int j = n - 1; j >= 0; j--)
		{
			int flag = 0;
			for (int h = 0; h < i; h++)
				for (int c = 0; c < j; c++)
					if (a[i][j] == a[h][c] && i != h && j != c)
						flag == 1;
			if (flag != 1)
				dem++;
		}
	return dem;
}
