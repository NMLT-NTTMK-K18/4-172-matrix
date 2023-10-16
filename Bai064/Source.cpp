#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&, int&);
bool KtNguyento(int);
int DemNguyento(int[][500], int, int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;
	int col;

	Nhap(arr, m, n, col);
	cout << "So luong so nguyen to trong cot " << col << " = " << DemNguyento(arr, m, n, col);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& col)
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
	cout << "Cot muon tinh: ";
	cin >> col;
}

bool KtNguyento(int x)
{
	if (x <= 0)
		return false;
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int DemNguyento(int a[][500], int m, int n, int col)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (KtNguyento(a[i][col]))
			dem++;
	return dem;
}