#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
void HoanVi(float& a, float& b);
void SapTang(float[][500], int, int);

int main()
{
	float arr[500][500];
	int m;
	int n;

	Nhap(arr, m, n);
	SapTang(arr, m, n);
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

void HoanVi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void SapTang(float a[][500], int m, int n)
{
	float b[500];
	int k = 0;
	int i, j;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if (b[i] > b[j])
				HoanVi(b[i], b[j]);

	k = 0;
	for(i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			a[i][j] = b[k++];
			cout << fixed << setw(5) << setprecision(4);
			cout << "a[" << i << "][" << j << "] = " << a[i][j];
		}
}