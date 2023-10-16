#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
bool Dang3m(int);
int Tong3m(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "Tong cac gia tri co dang 3^m = " << Tong3m(arr, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool Dang3m(int x)
{
	int t = x;
	int dv = 0;
	if (t <= 0)
		return false;
	while (t > 1)
	{
		dv = t % 3;
		if (dv != 0)
			return false;
		t = t / 3;
	}
	return true;
}

int Tong3m(int a[][500], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (Dang3m(a[i][j]))
				s = s + a[i][j];
	return s;
}