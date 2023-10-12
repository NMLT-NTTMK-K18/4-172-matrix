#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int &, int &);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Gia tri o bien:" << endl;

	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int &m, int &n)
{
	cout << "Nhap so dong: ";
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

void LietKe(int a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		cout << setw(5) << a[0][j];
	for (int i = 1; i < m - 1; i++)
	{
		cout << setw(5) << a[i][0];
		cout << setw(5) << a[i][n - 1];
	}
	for (int j = 0; j < n; j++)
		cout << setw(5) << a[m - 1][j];
}