#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int &, int &);
bool KtDong(float[][500], int, int, int);
void LietKe(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
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

bool KtDong(float a[][500], int m, int n, int row)
{
	for (int j = 0; j < n; j++)
		if (a[row][j] < 0)
			return true;
	return false;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (KtDong(a, m, n, i))
			cout << "Dong " << i << endl;
}