#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&);
bool ktToanChan(int);
int DemToanChan(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;

	Nhap(a, m, n);
	cout << "So luong so nguyen toan chu so chan la: " << DemToanChan(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
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
}
bool ktToanChan(int a)
{
	int flag = true;
	int t = abs(a);
	while (t > 0)
	{
		int b = t % 10;
		if (b % 2 != 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

int DemToanChan(int a[][500], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToanChan(a[i][j]))
				dem++;
	return dem;
}