#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
void nhapDoanXY(float &, float &);
float Tong(float[][500], int, int, float, float);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	float x, y;
	nhapDoanXY(x, y);

	cout << "Tong so thuc trong doan [" << x << ", " << y << "]: " << Tong(a, m, n, x, y) << endl;

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

void nhapDoanXY(float &x, float &y)
{
	cout << "Nhap doan [x, y]: ";
	cin >> x >> y;
}

float Tong(float a[][500], int m, int n, float x, float y)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] >= x && a[i][j] <= y)
				sum += a[i][j];
	return sum;
}
