#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int &, int &);
void HoanVi(float &a, float &b);
void SapCotTang(float[][500], int, int, int);
void LietKe(float[][500], int, int);
// UNDONE
int main()
{
	float arr[500][500];
	int m;
	int n;
	int col;

	cout << "Nhap cot can sap xep: ";
	cin >> col;
	Nhap(arr, m, n);
	SapCotTang(arr, m, n, col);
	LietKe(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

void HoanVi(float &a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapCotTang(float a[][500], int m, int n, int col)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
		{
			if (a[i][col] > a[j][col])
				HoanVi(a[i][col], a[j][col]);
		}
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << setprecision(5) << fixed << "a[" << i << "][" << j << "] : " << a[i][j];
		}
		cout << endl;
	}
}
