#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongDuong(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	float s = TongDuong(a, m, n);
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

float TongDuong(float a[][500], int m, int n)
{
	float s = 0;
	for (int i = 0; i < m; i ++)
		for (int j = 0; j < n; j++)
			if (a[i][j] >= 0)
				s += a[i][j];
	return s;
}