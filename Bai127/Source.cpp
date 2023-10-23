#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void SapCotTang(float[][500], int, int, int);
void SapCotGiam(float[][500], int, int, int);
void SapXep(float[][500], int, int);
void HoanVi(float&, float&);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);
	SapXep(a, m, n);
	cout << "Ma tran moi la: ";
	cout << setw(5);
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(5);
	}

	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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
void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapCotTang(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
		 if (a[i][c] > a[j][c])
		HoanVi(a[i][c], a[j][c]);
}
void SapCotGiam(float a[][500], int m, int n,int c)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = i + 1; j <= m - 1; j++)
			if (a[i][c] < a[j][c])
				HoanVi(a[i][c], a[j][c]);
}
void SapXep(float a[][500], int m, int n)
{
	for (int j = 0; j <= n - 1; j++)
		if (j % 2 == 0)
			SapCotGiam(a, m, n, j);
		else
			SapCotTang(a, m, n, j);
}
