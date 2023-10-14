#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&, int&);
bool Kt(float);
float TichCot(float[][500], int, int, int);


int main()
{
	float arr[500][500];
	int m;
	int n;
	int col;

	Nhap(arr, m, n, col);
	cout << "Tich cac so thuoc doan [-1, 0] " << col << " = " << TichCot(arr, m, n, col);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& col)
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
	cout << "Cot muon tinh : ";
	cin >> col;
}

bool Kt(float x)
{
	if (x >= -1 && x <= 0)
		return true;
	return false;
}

float TichCot(float a[500][500], int m, int n, int col)
{
	float t = 1;
	for (int i = 0; i < m; i++)
		if (Kt(a[i][col]))
			t = t * a[i][col];
	return t;
}