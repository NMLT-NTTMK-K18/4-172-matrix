#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[][500], int&, int&);
int ViTriLonNhat(int[], int);
int TimViTri(int[][500], int, int);



int main()
{
	int arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	cout << "Chu so xuat hien nhieu nhat: " << TimViTri(arr, m, n);
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

int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}

int TimViTri(int a[][500], int m, int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				dem[0]++;
			int t = abs(a[i][j]);
			while (t != 0)
			{
				int dv = t % 10;
				dem[dv]++;
				t = t / 10;
			}
		}
	return ViTriLonNhat(dem, 10);
}