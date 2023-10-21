#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int&, int&);
bool KtCon(float[][500], int, int, float[][500], int, int);

int main()
{
	//Ma tran a nho hon ma tran b
	//Kiem tra a la con cua b?
	float a[50][500];
	int m;
	int n;
	float b[50][500];
	int k;
	int l;

	cout << "Ma tran a: \n";
	Nhap(a, m, n);
	cout << "\nMa tran b: \n";
	Nhap(b, k, l);

	if (KtCon(a, m, n, b, k, l))
		cout << "\nMa tran a la con cua ma tran b";
	else
		cout << "\nMa tran a khong la con cua ma tran b";
	return 0;
}

void Nhap(float a[][500], int& m, int& n)
{
	cout << "Nhap so hang cua ma tran : ";
	cin >> m;
	cout << "Nhap so cot cua ma tran : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

bool KtCon(float a[][500], int m, int n, float b[][500], int k, int l)
{
	if (m > k || n > l)
		return false;
	for (int d = 0; d <= k - m; d++)
	{
		for (int c = 0; c <= l - n; c++)
		{
			int flag = 1;
			for (int i = 0; i < m; i++)
				for (int j = 0; j < n; j++)
					if (a[i][j] != b[d + i][c + j])
						flag = 0;
			if (flag == 1)
				return true;
		}
	}
	return false;
}