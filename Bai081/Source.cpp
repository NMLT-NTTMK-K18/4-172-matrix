#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
float AmLonNhat(float[][500], int, int);
float AmDau(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Gia tri am lon nhat trong mang: " << AmLonNhat(a, m, n) << endl;

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

float AmDau(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				return a[i][j];
}

float AmLonNhat(float a[][500], int m, int n)
{
	float min = AmDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] < 0) && (a[i][j] > min))
				min = a[i][j];
	return min;
}