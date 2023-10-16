#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
bool KtHoanThien(int);
int DemDong(int[][500], int, int, int);
int DemLonNhat(int[][500], int, int);
void LietKe(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	if (DemLonNhat(arr, m, n) == 0)
		cout << "Khong ton tai so hoan thien";
	else
		LietKe(arr, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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

bool KtHoanThien(int x)
{
	if (x <= 0)
		return false;
	int s = 0;
	for (int i = 1; i < x; i++)
		if (x % i == 0)
			s = s + i;
	if (s == x)
		return true;
	return false;
}

int DemDong(int a[][500], int m, int n, int row)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		if (KtHoanThien(a[row][j]))
			dem++;
	return dem;
}

int DemLonNhat(int a[][500], int m, int n)
{
	int lc = DemDong(a, m, n, 0);
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) > lc)
			lc = DemDong(a, m, n, i);
	if (lc == 0)
		return 0;
	return lc;
}

void LietKe(int a[][500], int m, int n)
{
	cout << "\n Cac Hang co nhieu so hoan thien nhat: ";
	for (int i = 0; i < m; i++)
		if (DemDong(a, m, n, i) == DemLonNhat(a, m, n))
			cout << "Hang " << i;
}

