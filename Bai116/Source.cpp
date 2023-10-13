#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int ktCot(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Cac cot thoa dieu kien: Tang dan" << endl;
	LietKe(a, m, n);

	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

int ktCot(float a[][500], int m, int n, int column)
{
	for (int i = 0; i < m - 1; i++)
		if (a[i][column] > a[i + 1][column])
			return 0;
	return 1;
}

void LietKe(float a[][500], int m, int n)
{
	for (int j = 0; j < n; j++)
		if (ktCot(a, m, n, j))
		{
			cout << "Cot thu " << j << " thoa man" << endl;
			for (int i = 0; i < m; i++)
				cout << a[i][j] << " ";
			cout << endl;
		}
}