#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void HoanViDong(float[][500], int, int, int, int);
void HoanVi(float&, float&);

int main()
{
	float a[500][500];
	int m, n;
	int d1, d2;

	Nhap(a, m, n);
	cout << "Nhap 2 dong can hoan vi: ";
	cin >> d1 >> d2;
	HoanViDong(a, m, n, d1, d2);
	Xuat(a, m, n);
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << a[i][j];
		cout << endl;
	}
}

void HoanViDong(float a[][500], int m, int n, int d1, int d2)
{
	for (int j = 0; j < n; j++)
		HoanVi(a[d1][j], a[d2][j]);
}

void HoanVi(float& t, float& k)
{
	float temp = t;
	t = k;
	k = temp;
}