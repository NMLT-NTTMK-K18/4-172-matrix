#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
bool KtNguyenTo(int);
int NguyenToDau(int[][500], int, int);
int NguyenToLonNhat(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	if (NguyenToLonNhat(arr, m, n) == -1)
		cout << "Khong co so nguyen to";
	else
		cout << "So nguyen to lon nhat la: " << NguyenToLonNhat(arr, m, n);
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

bool KtNguyenTo(int x)
{
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if (x % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

int NguyenToDau(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtNguyenTo(a[i][j]))
				return a[i][j];
	return -1;
}

int NguyenToLonNhat(int a[][500], int m, int n)
{
	int lc = NguyenToDau(a, m, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > lc && KtNguyenTo(a[i][j]))
				lc = a[i][j];
	return lc;
}