#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int&, int&);
bool ktDongTang(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int m, n;
	int d;

	Nhap(a, m, n);
	cout << "Nhap dong: ";
	cin >> d;
	if (ktDongTang(a, m, n, d) == 1)
		cout << "Dong tang";
	else
		cout << "Dong khong tang";
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

bool ktDongTang(float a[][500], int m, int n, int d)
{
	bool flag = 1;
	for (int j = 0; j < n - 1; j++)
		if (a[d][j] > a[d][j + 1])
			flag = 0;
	return flag;
}