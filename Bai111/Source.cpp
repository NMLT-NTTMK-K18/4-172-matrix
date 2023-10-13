#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int ktDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	cout << "Cac dong thoa dieu kien: Ton tai so duong, am, 0" << endl;
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

int ktDong(float a[][500], int m, int n, int row)
{
	int negative = 0;
	int positive = 0;
	int zero = 0;
	for (int j = 0; j < n; j++)
	{
		if (a[row][j] < 0)
			negative++;
		else if (a[row][j] > 0)
			positive++;
		else if (a[row][j] == 0)
			zero++;
	}
	return (negative && positive && zero);
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
		{
			cout << "Dong thu " << i << " thoa man" << endl;
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
}
