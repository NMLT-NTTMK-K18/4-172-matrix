#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&,int&);
float LonNhatDong(float[][500], int, int, int);

int main()
{
	float a[500][500];
	int n;
	int m;
	int k;
	Nhap(a, m, n,k);
	cout<<"Gia tri lon nhat tren dong "<<k<<" la: "<<LonNhatDong(a, m, n, k);
	return 0;
}

void Nhap(float a[][500], int& m, int& n, int& d)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	cout << endl;
	cout << "Nhap dong can kiem tra: ";
	cin >> d;
}

float LonNhatDong(float a[][500], int m, int n, int k)
{
	float max = a[k][0];
	for (int i = 0; i < n; i++)
		if (a[k][i] > max)
			max = a[k][i];
	return max;
}