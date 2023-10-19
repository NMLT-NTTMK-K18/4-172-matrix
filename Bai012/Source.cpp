#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[][500], int&, int&);
void LietKe(int[][500], int, int);

int main()
{
	int a[500][500];
	int m, n;
	Nhap(a, m, n);
	LietKe(a, m, n);
	return 0;
}

void Nhap(int a[][500], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << endl;
	cout << "Nhap so cot: ";
	cin >> n;
	cout << "Nhap ma tran :" << "\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "]" << "[" << j << "]";
			cin >> a[i][j];
		}
	}
}

void LietKe(int a[][500], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int dem = 0;
			for (int m = 1; m <= a[i][j]; m++)
			{
				if (a[i][j] % m == 0)
					dem++;
			}
			if (dem == 2)
				cout << a[i][j] << setw(8);
		}
	}
}