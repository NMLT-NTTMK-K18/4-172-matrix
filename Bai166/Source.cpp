#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
int ktCon(float[][500], int, int, int, int);
void ConDau(float[][500], int, int, int &, int &);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Ma tran 3x3 toan duong dau tien: " << endl;
	int vtd, vtc;
	ConDau(a, m, n, vtd, vtc);
	if (vtd == vtc && vtd != -1)
		cout << "Khong co ma tran 3x3 toan duong" << endl;
	else
		Xuat(a, vtd, vtc);

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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[m + i][n + j] << '\t';
		cout << endl;
	}
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

void ConDau(float a[][500], int m, int n, int &vtd, int &vtc)
{
	for (vtd = 0; vtd <= m - 3; vtd++)
		for (vtc = 0; vtc <= n - 3; vtc++)
			if (ktCon(a, m, n, vtd, vtc) == 1)
				return;
	vtd = vtc = -1;
}