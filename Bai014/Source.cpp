#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
bool KtDang(int);
void Lietke(int[][500], int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	Lietke(arr, m, n);
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

bool KtDang(int x)
{
	int t = x;
	if (t <= 0)
		return false;
	while (t > 1)
	{
		int dv = t % 2;
		if (dv != 0)
			return false;
		t = t / 2;
	}
	return true;
}

void Lietke(int a[][500], int m, int n)
{
	cout << "Cac gia tri co dang 2^m la: \n";
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtDang(a[i][j]))
				cout << setw(8) << a[i][j];
}
