#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
int TonTaiDuong(float[][500], int, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	if (TonTaiDuong(a, m, n))
		cout << "Ma tran ton tai gia tri duong" << endl;
	else
		cout << "Ma tran khong ton tai gia tri duong" << endl;

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

int TonTaiDuong(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				return 1;
	return 0;
}