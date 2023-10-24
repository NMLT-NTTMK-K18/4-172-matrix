#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
int TanSuat(float[][500], int, int, float);
float TimGiaTri(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Gia tri xuat hien nhieu nhat trong mang: " << TimGiaTri(a,m,n) << endl;

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

int TanSuat(float a[][500], int m, int n, float x)
{
	int dem=0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == x)
				dem++;
	return dem;
}

float TimGiaTri(float a[][500], int m, int n)
{
	int xhn = TanSuat(a, m, n, a[0][0]);
	float giatrixhn = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (TanSuat(a, m, n, a[i][j]) > xhn)
				giatrixhn = a[i][j];
	return giatrixhn;
}



