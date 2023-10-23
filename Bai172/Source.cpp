#include <iostream>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void TimConLonNhat(float[][500], int, int, int&, int&, int&, int&);

int main()
{
	float a[50][500];
	int m, n;
	Nhap(a, m, n);

	int lt, rt, lb, rb;
	TimConLonNhat(a, m, n, lt, rt, lb, rb);

	if (lt == rt == lb == rb && lt == -1)
		cout << "Khong co ma tran con nao lon nhat chua toan gia tri duong" << endl;
	else
	{
		cout << "Ma tran toan duong co tong lon nhat la" << endl;
		Xuat(a, m, n);
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

void Xuat(float a[][500], int lt, int rt, int lb, int rb)
{
	for (int i = lt; i <= lb; i++)
	{
		for (int j = lt; j <= rt; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

bool checkLonNhat(float a[][500], int& lt, int& rt, int& lb, int& rb)
{
	for (int i = lt; i <= lb; i++)
		for (int j = lt; j <= rt; j++)
			if (a[i][j] < 0)
				return false;
	return true;
}

int sumOfRangeArray(float a[][500], int& lt, int& rt, int& lb, int& rb)
{
	int sum = 0;
	for (int i = lt; i <= lb; i++)
		for (int j = lt; j <= rt; j++)
			sum += a[i][j];
	return sum;
}

void TimConLonNhat(float a[][500], int m, int n, int& lt, int& rt, int& lb, int& rb)
{
	int max = 0;
	lt, rt, lb, rb = -1;
	for (int height = 1; height <= m; height++)
		for (int width = 1; width <= n; width++)
			for (int i = 0; i <= m - height; i++)
				for (int j = 0; j <= n - width; j++)
				{
					int lt_check = i;
					int rt_check = j + width - 1;
					int lb_check = i + height - 1;
					int rb_check = j;
					if (checkLonNhat(a, lt_check, rt_check, lb_check, rb_check))
					{
						int sum = sumOfRangeArray(a, lt_check, rt_check, lb_check, rb_check);
						if (sum > max)
						{
							max = sum;
							lt = lt_check;
							rt = rt_check;
							lb = lb_check;
							rb = rb_check;
						}
					}
				}
}
