#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang: ";
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		cout << endl;
	}
}