#include <iostream>
#include <iomanip>
using namespace std;

void Nhap (float[][500], int&, int&,float&,float&);
float Tong(float[][500], int, int,float, float);

int main()
{
	int m, n;
	float a[500][500];
	float x, y;
	Nhap(a, m, n, x, y);
	cout << "Tong cac gia tri nam trong doan [" << x << "," << y << "] la:";
	cout << endl;
	cout << Tong(a, m, n, x, y);
	return 0;
}

void Nhap(float a[][500], int& m, int& n,float& x,float& y)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << endl;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap ma tran :" << "\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
	}
	cout << "Nhap [x,y] = \n";
	cin >> x;
	cin >> y;
}

float Tong(float a[][500], int m, int n, float x, float y)
{
	float s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] >= x && a[i][j] <= y)
				s += a[i][j];
	}
	return s;
}


