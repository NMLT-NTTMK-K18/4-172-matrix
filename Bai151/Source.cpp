#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void Xuat(float[][500], int, int);
float TongCot(float[][500], int, int, int);
void ThemDong(float[][500], int &, int);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	ThemDong(a, m, n);
	cout << "Ma tran sau khi them dong o cuoi sao cho moi phan tu tren dong la tong tat ca cac phan tu tren cot ma no thuoc ve: " << endl;
	Xuat(a, m, n);

	return 0;
}

void Nhap(float a[][500], int &m, int &n)
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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

float TongCot(float a[][500], int m, int n, int column)
{
	float s = 0;
	for (int i = 0; i < m; i++)
		s += a[i][column];
	return s;
}
void ThemDong(float a[][500], int &m, int n)
{
	for (int j = 0; j < n; j++)
		a[m][j] = TongCot(a, m, n, j);
	m++;
}