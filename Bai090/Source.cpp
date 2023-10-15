#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float TongDong(float[][500], int, int, int);
float TongLonNhat(float[][500], int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;

	Nhap(a, m, n);
	LietKe(a, m, n);
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

float TongDong(float a[][500], int m, int n, int d)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[d][j];
	return s;
}

float TongLonNhat(float a[][500], int m, int n)
{
	float tln = TongDong(a, m, n, 0);
	for (int i = 1; i < m; i++)
		if (TongDong(a, m, n, i) > tln)
			tln = TongDong(a, m, n, i);
	return tln;
		
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (TongDong(a, m, n, i) == TongLonNhat(a, m, n))
			cout << i << setw(10);
}