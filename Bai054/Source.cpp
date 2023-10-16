#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
int DemDuong(float[][500], int, int);


int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "So luong cac so duong: " << DemDuong(arr, m, n);
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

int DemDuong(float a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0)
				dem++;
	return dem;
}