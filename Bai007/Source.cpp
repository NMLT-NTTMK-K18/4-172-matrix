#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

void Nhap(float[][500], int, int);
void Xuat(float[][500], int, int);


int main()
{
	float a[500][500];
	int m, n;
	cin >> m >> n;
	string fileName = "intdata02.inp";
	Nhap(fileName, a, m, n);
	Xuat(a, m, n);
	
	return 0;
}

void Nhap(string filename, float a[][500], int m, int n)
{
	ifstream fi(filename);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			fi >> a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}