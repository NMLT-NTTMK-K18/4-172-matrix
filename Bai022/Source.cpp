#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void LietKe(int[][500], int, int);
bool KtraLe(int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& d)
{
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "\nNhap so cot : ";
	cin >> n;
	cout << "\nNhap ma tran:";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "] = ";
			cin >> a[i][j];
		}
	}
}

bool KtraLe(int a)
{
	if (a % 2 == 0)
		return true;
	return false;
}
void LietKe(int a[][500], int m, int n)
{
	cout << "Cac so nguyen toan le tren bien ma tran la: ";
	for (int i = 0; i < m; i++)
	{
		if (KtraLe(a[i][0] == true))
			cout << a[i][0]<<setw(5);
		if (KtraLe(a[i][n-1] == true))
			cout << a[i][n-1] << setw(5);
	}
	for (int j = 1; j < n - 1; j++)
	{
		if (KtraLe(a[0][j]) == true)
			cout << a[0][j] << setw(5);
		if (KtraLe(a[m-1][j] == true))
			cout << a[m-1][j] << setw(5);
	}
}
