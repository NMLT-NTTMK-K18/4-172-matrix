#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void SapCotGiam(float[][500], int, int, int);
void HoanVi(float&, float&);

int main()
{
	float a[500][500];
	int m, n;
	int c;

	Nhap(a, m, n);
	cout << "Nhap cot: ";
	cin >> c;
	SapCotGiam(a, m, n, c);
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
			cout << fixed << setprecision(2) << setw(10) << a[i][j];
		cout << endl;
	}
}

void SapCotGiam(float a[][500], int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}

void HoanVi(float& t, float& k)
{
	float temp = t;
	t = k;
	k = temp;
}