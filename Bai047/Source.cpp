#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongBien(float[][500], int, int);

int main()
{
	int m, n;
	float a[500][500];
	Nhap(a, m, n);
	cout << "Tong cac gia tri tren bien la :" << TongBien(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "\nNhap so cot : ";
	cin >> n;
	cout << "\nNhap ma tran:";
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

float TongBien(float a[][500], int m, int n)
{
	float s = 0.0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (i == 0 || i == (m - 1) || j == 0 || j == (n - 1))
				s = s + a[i][j];
	return s;
}
