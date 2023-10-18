#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int &, int &);
bool KtToanDuong(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	if (KtToanDuong(arr, m, n))
		cout << "Ma tran toan duong";
	else
		cout << "Ma tran khong toan duong";
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

bool KtToanDuong(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] < 0)
				return false;
		}
	return true;
}