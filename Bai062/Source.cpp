#include <iostream>
using namespace std;

void Nhap(int[][500], int&, int&,int& );
bool ktToanle(int);
int DemToanLeTrenDong(int[][500], int, int,int);

int main()
{
	int a[500][500];
	int m, n,d;

	Nhap(a, m, n,d);
	cout << "So luong so nguyen toan chu so le tren dong "<<d<<" la: " << DemToanLeTrenDong(a, m, n,d);
	return 0;
}

void Nhap(int a[][500], int& m, int& n,int& d)
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
bool ktToanLe(int a)
{
	int flag = true;
	int t = abs(a);
	while (t > 0)
	{
		int b = t % 10;
		if (b % 2 == 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

int DemToanLeTrenDong(int a[][500], int m, int n,int d)
{
	int dem = 0;
		for (int j = 0; j < n; j++)
			if (ktToanLe(a[d][j]))
				dem++;
	return dem;
}