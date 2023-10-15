#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
float DuongDau(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	int c;

	Nhap(a, m, n);
	float dd = DuongDau(a, m, n);
	cout << dd;
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

float DuongDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return a[i][j];
	return -1;
}