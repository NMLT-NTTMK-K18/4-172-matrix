#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[][500], int, int);
int KtCucTieu(float[][500], int, int, int, int);
void LietKeCucTieu(float[][500], int, int);

int di[8] = {-1, -1, -1, 0, +1, +1, +1, 0};
int dj[8] = {-1, 0, +1, +1, +1, 0, -1, -1};

int main()
{
	float a[500][500];
	int n;
	int m;
	cin >> n >> m;
	memset(a, 0, sizeof(a));
	Nhap(a, n, m);
	LietKeCucTieu(a, n, m);
	return 0;
}

void Nhap(float a[][500], int n, int m)
{
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < m + 1; j++)
			cin >> a[i][j];
}

int KtCucTieu(float a[][500], int n, int m, int dn, int dm)
{
	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[dn][dm] >= a[dn + di[i]][dm + dj[i]])
			flag = 0;
	return flag;
}

void LietKeCucTieu(float a[][500], int n, int m)
{
	for (int i = 1; i < n + 1; i++)
		for (int j = 1; j < m + 1; j++)
			if (KtCucTieu(a, n, m, i, j))
				cout << setw(8) << a[i][j];
}
