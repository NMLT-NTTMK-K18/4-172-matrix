#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
void SapTang(int[], int);
void MaTranXoanOc(int[][100], int, int);

int main()
{
	int a[100][100];
	int m, n;
	Nhap(a, m, n);
	MaTranXoanOc(a, m, n);
	Xuat(a, m, n);
	return 0;
}

void Nhap(int a[][100], int &m, int &n)
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

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(5) << a[i][j];
		}
		cout << endl;
	}
}

void SapTang(int a[], int n)
{
	int temp = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void MaTranXoanOc(int a[][100], int dong, int cot)
{
	int b[100];
	int k = 0;
	for (int i = 0; i < dong; i++)
		for (int j = 0; j < cot; j++)
			b[k++] = a[i][j];
	SapTang(b, k);

	k = 0;
	int trai = 0, tren = 0, duoi = dong, phai = cot, dem = 0, n = dong * cot;
	while (k < n)
	{
		// chạy hàng trên
		for (int i = trai; i < phai; i++)
		{
			if (dem < n)
			{
				a[tren][i] = b[k++];
			}
		}
		tren++;
		// chạy cột phải
		for (int i = tren; i < duoi; i++)
		{
			if (k < n)
			{
				a[i][phai - 1] = b[k++];
			}
		}
		phai--;
		// chạy hàng dưới
		for (int i = phai - 1; i >= trai; i--)
		{
			if (k < n)
			{
				a[duoi - 1][i] = b[k++];
			}
		}
		duoi--;
		// chạy cột trái
		for (int i = duoi - 1; i >= tren; i--)
		{
			if (k < n)
			{
				a[i][trai] = b[k++];
			}
		}
		trai++;
	}
}