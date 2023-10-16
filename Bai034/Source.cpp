#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&, int&);
bool KtNguyento(int);
int TongDong(int[][500], int, int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;
	int row;

	Nhap(arr, m, n, row);
	cout << "Tong cac so nguyen to tren hang "<<row<<" = " << TongDong(arr, m, n, row);
	return 0;
}

void Nhap(int a[][500], int& m, int& n, int& row)
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
	cout << "Hang muon tinh tong cac so nguyen to: ";
	cin >> row;
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

int TongDong(int a[][500], int m, int n, int row)
{
	int s = 0;
	for (int j = 0; j < n; j++)
		if (KtNguyento(a[row][j]))
			s = s + a[row][j];
	return s;
}