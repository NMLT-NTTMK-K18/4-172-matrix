#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
bool KtDang(int);
void Lietke(int[][500], int, int, int);


int main()
{
	int arr[500][500];
	int m;
	int n;
	int col;

	Nhap(arr, m, n);
	cout << "Cot can kiem tra: ";
	cin >> col;
	Lietke(arr, m, n, col);
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

bool KtDoixung(int x)
{
	int t = abs(x);
	int dv = 0;
	int dn = 0;
	if (x == 0)
		return false;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == abs(x))
		return true;
	return false;
}

void Lietke(int a[][500], int m, int n, int col)
{
	cout << "\nCac gia tri doi xung tren cot " << col << " la: \n";
	for (int i = 0; i < m; i++)
		if (KtDoixung(a[i][col]))
			cout << "a[" << i << "][" << col << "] = " << a[i][col] << endl;
}
