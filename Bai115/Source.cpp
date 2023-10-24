#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
bool ktDong(float[][500], int, int, int);
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

bool ktDong(float a[][500], int m, int n, int d)
{
	bool flag = 1;
	for (int j = 0; j < n - 1; j++)
		if (a[d][j] < a[d][j + 1])
			flag = 0;
	return flag;
}

void LietKe(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
			cout << i << setw(10);
}