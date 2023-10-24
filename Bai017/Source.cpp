#include <iostream>
#include <iomanip>
using namespace std;

bool ktHoanThien(int k);
void Nhap(int[][500], int&, int&,int&);
void LietKe(int[][500], int, int);

int main()
{
	int m, n,d;
	int a[500][500];
	Nhap(a, m, n, d);
	LietKe(a, m, d);
}

void Nhap(int a[][500], int& m, int& n,int& d)
{
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "\nNhap so cot : ";
	cin >> n;
	cout << "\nNhap ma tran:";
	cout << endl;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << "\n Nhap dong can kiem tra: ";
	cin >> d;
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

void LietKe(int a[][500], int m, int d )
{
	cout << "So hoan thien tren dong "<<d<<" la: ";
	for (int j = 1; j <= m; j++)
		{
			if (ktHoanThien(a[d][j]) == true)
				cout << a[d][j] << setw(8);
		}
}