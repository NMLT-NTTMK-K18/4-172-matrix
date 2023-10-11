#include <iostream>
using namespace std;

void Nhap(float[][500], int, int);
void BienDoi(float[][500], int, int);
void Xuat(float[][500], int, int);

int main()
{
	float a[500][500];
	int m;
	int n;
	cin >> n >> m;
	Nhap(a, m, n);
	BienDoi(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void BienDoi(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < 0)
				a[i][j] = -a[i][j];
}

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; i++)
			cout << a[i][j];
		cout << endl;
	}
}