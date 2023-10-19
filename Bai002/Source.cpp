#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

void TaoMaTran(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void Xuat(string, float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	TaoMaTran(a, m, n);
	Xuat(a, m, n);
	Xuat("data06.inp", a, m, n);
	return 0;
}

void TaoMaTran(float a[][500], int& m, int& n)
{
	cout << "Nhap So Dong: ";
	cin >> m;
	cout << "Nhap So Cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -100.0 + (rand() / (RAND_MAX / (200.0)));
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8);
			cout << setprecision(5);
			cout << a[i][j];
		}
		cout << "\n";
	}
	
}

void Xuat(string filename, float a[][500], int m, int n)
{
	cout << "Xuat ma tran ra file: " << filename << "\n";
	ofstream fo(filename);
	fo << setw(8) << m;
	fo << setw(8) << n;
	fo << "\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			fo << setw(8) << a[i][j];
		fo << "\n";
	}
	cout << "Da xuat thanh cong!"<<endl;
}