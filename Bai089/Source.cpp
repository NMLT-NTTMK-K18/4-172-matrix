#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "Tong cot nho nhat la: " << TongNhoNhat(arr, m, n);
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

float TongCot(float a[][500], int m, int n, int col)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s = s + a[i][col];
	return s;
}

float TongNhoNhat(float a[][500], int m, int n)
{
	float lc = TongCot(a, m, n, 0);
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) < lc)
			lc = TongCot(a, m, n, j);
	return lc;
}