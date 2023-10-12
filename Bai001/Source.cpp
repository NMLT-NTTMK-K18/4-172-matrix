#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void TaoMaTran(int[][500], int &, int &);
void Xuat(int[][500], int, int);
void Xuat(string, int[][500], int, int);

int main()
{
	int a[500][500], m, n;
	TaoMaTran(a, m, n);
	Xuat(a, m, n);
	Xuat("data01.inp", a, m, n);
	return 0;
}

void TaoMaTran(int a[][500], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = rand() % 100;
}

void Xuat(int a[][500], int m, int n)
{
	cout << "Ma tran:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

void Xuat(string filename, int a[][500], int m, int n)
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
	cout << "Da xuat thanh cong !" << endl;
}