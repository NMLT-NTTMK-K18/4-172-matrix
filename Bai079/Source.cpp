#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
float NhoNhat(float[][500], int, int);
int DemNhoNhat(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;
	float x;

	Nhap(arr, m, n);
	cout << "So luong gia tri nho nhat: " << DemNhoNhat(arr, m, n);
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

float NhoNhat(float a[][500], int m, int n)
{
	float lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] < lc)
				lc = a[i][j];
	return lc;
}

int DemNhoNhat(float a[][500], int m, int n)
{
	int dem = 0;
	float Min = NhoNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == Min)
				dem++;
	return dem;
}