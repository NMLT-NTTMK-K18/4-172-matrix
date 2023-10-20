#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
int LietKe(int[][500], int, int,int&);

int main()
{
	int a[500][500];
	int s = 0;
	int m, n;
	Nhap(a, m, n);
	cout<<"Tong cac so nguyen to trong ma tran la: " <<LietKe(a, m, n, s);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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
}

int LietKe(int a[][500], int m, int n,int& s)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int dem = 0;
			for (int m = 1; m <= a[i][j]; m++)
			{
				if (a[i][j] % m == 0)
					dem++;
			}
			if (dem == 2)
				s += a[i][j];
		}
	}
	return s;
}