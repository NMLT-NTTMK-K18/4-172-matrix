#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[][500], int &, int &);
int DemLanCan(float[][500], int, int, int, int);
void XayDung(float[][500], int, int, float[][500], int&,int&);

int main()
{
	float arr[500][500];
	int m;
	int n;
	float brr[500][500];;
	int k;
	int l;

	Nhap(arr, m, n);
	XayDung(arr, m, n, brr, k, l);
	return 0;
}

void Nhap(float a[][500], int &m, int &n)
{
	cout << "Nhap so hang cua ma tran: ";
	cin >> m;
	cout << "Nhap so cot cua ma tran: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
}

int DemLanCan(float a[][500], int m, int n, int d, int c)
{
	int dem=0;
	for(int di=-1;di<=1;di++)
	for(int dj=-1;dj<=1;dj++)
	if(d+dj>=0 && d+di<m && c+dj>=0 && c+dj<n && !(di==0&&dj==0)&&a[d+di][c+dj]>0)
	dem++;
	return dem;
}

void XayDung(float a[][500], int m, int n, float b[][500], int &k, int &l)
{
	k=m;
	l=n;
	for(int i=0;i<k;i++)
	for(int j=0;j<l;j++)
	{
		b[i][j]=DemLanCan(a,m,n,i,j);
		cout << setw(5) << "b[" << i << "][" << j << "] = "<< b[i][j];
	}
}