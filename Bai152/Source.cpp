#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
float TichCot(float[][500], int, int, int);
void ThemCot(float[][500], int, int&);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	ThemCot(a, m, n);
	cout << "Ma tran sau khi them cot o cuoi sao cho moi phan tu tren cot la tich tat ca cac phan tu tren dong ma no thuoc ve: " << endl;
	Xuat(a, m, n);

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

void Xuat(float a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << '\t';
		cout << endl;
	}
}

float TichCot(float a[][500], int m, int n, int column)
{
	float s = 1;
	for (int i = 0; i < n; i++)
		s *= a[column][i];
	return s;
}
void ThemCot(float a[][500], int m, int& n)
{
	for (int i = 0; i < m; i++)
		a[i][n] = TichCot(a, m, n, i);
	n++;
}