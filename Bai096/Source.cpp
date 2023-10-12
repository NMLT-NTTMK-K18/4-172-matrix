#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[][500], int &, int &);
float LonNhat(float[][500], int, int);
float NhoNhat(float[][500], int, int);
float LonNhi(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "So lon thu nhi: " << LonNhi(a, m, n) << endl;

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

float NhoNhat(float a[][500], int m, int n)
{
	float min = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < min)
				min = a[i][j];
	return min;
}

float LonNhat(float a[][500], int m, int n)
{
	float max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > max)
				max = a[i][j];
	return max;
}
float LonNhi(float a[][500], int m, int n)
{
	float min = NhoNhat(a, m, n);
	float max = LonNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > min && a[i][j] < max)
				min = a[i][j];
	return min;
}