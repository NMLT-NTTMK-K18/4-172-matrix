#include <iostream>
#include <fstream>
using namespace std;

void Nhap(int[][500], int, int);
void Xuat(int[][500], int, int);
int main()
{
	int a[500][500];
	int n;
	int m;
	cin >> n >> m;
	string filename = "floatdata06.inp";
	Nhap(filename, a, n, m);
	Xuat(a, n, m);
	return 0;
}

void Nhap(string filename, int a[][500], int n, int m)
{
	ifstream fi(filename);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}

void Xuat(int a[][500], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}