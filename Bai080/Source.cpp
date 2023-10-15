#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
float LonNhat(float[][500], int, int);
float LonNhatDong(float[][500], int, int, int);
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

float LonNhat(float a[][500], int m, int n)
{
	float ln = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > ln)
				ln = a[i][j];
	return ln;
}

float LonNhatDong(float a[][500], int m, int n, int d)
{
	float ln = a[d][0];
	for (int j = 0; j < n; j++)
		if (a[d][j] > ln)
			ln = a[d][j];
	return ln;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (LonNhatDong(a, m, n, i) == LonNhat(a, m, n))
			cout << i << setw(10);
}