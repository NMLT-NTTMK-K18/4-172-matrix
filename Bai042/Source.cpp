#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&,int&);
bool Dang2m(int);
int TongCot(int[][500], int, int, int);


int main()
{
	int m, n, d;
	int a[500][500];
	Nhap(a, m, n, d);
	cout << "Tong cac gia tri dang 2^m tren cot " << d << " la :" << TongCot(a, m, n, d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int&d)
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
	cout << "\n Nhap cot can kiem tra: ";
	cin >> d;
}

bool Dang2m(int a)
{
	int flag = 0;
	for (int i = 0; pow(2,i) <= a; i++)
		if (a == pow(2, i))
			flag = 1;
	return flag;
}

int TongCot(int a[][500], int m, int n, int d)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		if (Dang2m(a[i][d])==1)
			s += a[i][d];
		cout << s;
	}
	return s;
}
