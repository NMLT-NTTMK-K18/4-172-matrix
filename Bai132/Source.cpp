#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[][500], int&, int&);
void DuongGiam(float[][500], int, int);
void AmTang(float[][500], int, int);
void SapXep(float[][500], int, int);
void HoanVi(float&, float&);


int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);
	SapXep(a, m, n);
	cout << "Ma tran moi la: ";
	cout << setw(5);
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(5);
	}

	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];

		}
}
void HoanVi(float& a, float& b)
{
		float temp = a;
		a = b;
		b = temp;
}

void DuongGiam(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (a[i][j] > 0)
				b[k++] = a[i][j];
	for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
			if(b[i]<b[j])
			HoanVi(b[i], b[j]);
		k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		if (a[i][j] > 0)
		a[i][j] = b[k++];
}
void AmTang(float a[][500], int m, int n)
{
	float b[500];
	int k;
	int i, j;
	k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		if (a[i][j] < 0)
		b[k++] = a[i][j];
		for (i = 0; i <= k - 2; i++)
		for (j = i + 1; j <= k - 1; j++)
		if (b[i] > b[j])
		HoanVi(b[i], b[j]);
		k = 0;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		if (a[i][j] < 0)
		a[i][j] = b[k++];
}
void SapXep(float a[][500], int m, int n)
{
	AmTang(a, m, n);
	DuongGiam(a, m, n);
}