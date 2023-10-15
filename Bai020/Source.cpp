#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void LietKe(int[][500], int, int, int);
bool KiemTra5m(int);

int main()
{
	int a[500][500];
	int m, n;
	int c;

	Nhap(a, m, n);
	cout << "Nhap cot: ";
	cin >> c;
	LietKe(a, m, n, c);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

void LietKe(int a[][500], int m, int n, int c)
{
	for (int i = 0; i < n; i++)
		if (KiemTra5m(a[i][c]) == 1)
			cout << fixed << a[i][c] << setw(10);
}

bool KiemTra5m(int k)
{
	if (k < 1)
		return 0;
	bool flag = 1;
	for (int t = k; t > 1; t /= 5)
		if (t % 5 != 0)
			flag = 0;
	return flag;
}