#include <iostream>
using namespace std;

void Nhap(float[][500], int &, int &);
float TongCot(float[][500], int, int, int);
float TongNhoNhat(float[][500], int, int);
void LietKe(float[][500], int, int);

int main()
{
	float a[500][500];
	int m, n;
	Nhap(a, m, n);

	LietKe(a, m, n);

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

float TongCot(float a[][500], int m, int n, int row)
{
	float sum = 0;
	for (int i = 0; i < m; i++)
		sum += a[i][row];
	return sum;
}
float TongNhoNhat(float a[][500], int m, int n)
{
	float min;
	min = TongCot(a, m, n, 0);
	for (int j = 1; j < n; j++)
		if (TongCot(a, m, n, j) < min)
			min = TongCot(a, m, n, j);
	return min;
}
void LietKe(float a[][500], int m, int n)
{
	float min = TongNhoNhat(a, m, n);
	for (int j = 0; j < n; j++)
		if (TongCot(a, m, n, j) == min)
		{
			cout << "Cot " << j << " co tong nho nhat: " << min << endl;
			for (int i = 0; i < m; i++)
				cout << "a[" << i << "][" << j << "]: " << a[i][j] << endl;
		}
}