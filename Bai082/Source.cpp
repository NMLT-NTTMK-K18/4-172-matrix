#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
float ChanLonNhat(int[][500], int, int);
float ChanDau(int[][500], int, int);

int main()
{
	int a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Gia tri chan lon nhat trong mang: " << ChanLonNhat(a, m, n) << endl;

	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

float ChanDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j]%2== 0)
				return a[i][j];
}

float ChanLonNhat(int a[][500], int m, int n)
{
	int max = ChanDau(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] %2 ==0) && (a[i][j] > max))
				max = a[i][j];
	return max;
}