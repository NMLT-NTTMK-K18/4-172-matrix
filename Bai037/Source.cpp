#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&,int&);
float TongDong(float[][500], int, int, int);

int main()
{
	int m, n, d;
	float a[500][500];
	Nhap(a, m, n, d);
	cout<<"Tong cac gia tri duong tren dong "<<d<<" la :"<<TongDong(a, m, n, d);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& d)
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
	cout << "\n Nhap dong can kiem tra: ";
	cin >> d;
}

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0.0;
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] > 0)
			s += a[d][j];
	}
	return s;
}
 