#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
bool ktDong(int[][500], int, int, int);
void LietKe(int[][500], int, int);
bool ktNguyenTo(int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	LietKe(a, m, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

bool ktDong(int a[][500], int m, int n, int d)
{
	for (int j = 0; j < n; j++)
		if (ktNguyenTo(a[d][j]) == 1)
			return 1;
	return 0;
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
			cout << i << setw(10);
}