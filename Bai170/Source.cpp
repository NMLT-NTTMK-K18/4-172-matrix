#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);
int DemCon(float[][100], int, int, float[][100], int, int);

int main()
{
	float a[100][100];
	float b[100][100];
	int m1, n1, m2, n2;

	cout << "Nhap ma tran a:" << endl;
	Nhap(a, m1, n1);
	cout << "Nhap ma tran b:" << endl;
	Nhap(b, m2, n2);
	cout << DemCon(a, m1, n1, b, m2, n2);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap phan tu [" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
}

int DemCon(float a[][100], int m1, int n1, float b[][100], int m2, int n2)
{
	if (m1 > m2 || n1 > n2)
		return 0;
	int dem = 0;
	for (int d = 0; d <= m2 - m1; d++)
		for (int c = 0; c <= n2 - n1; c++)
		{
			int flag = 1;
			for (int i = 0; i < m1; i++)
				for (int j = 0; j < n1; j++)
					if (b[d + i][c + j] != a[i][j])
						flag = 0;
			if (flag == 1)
			dem++;
		}
	return dem;
}