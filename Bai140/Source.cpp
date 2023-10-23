#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[][500], int&, int&);
void Xuat(float[][500], int, int);
void TaoMaTranZicZacNgang(float[][500], int, int);

int main()
{
    float a[500][500];
    int d, c;
    Nhap(a, d, c);
    TaoMaTranZicZacNgang(a, d, c);
    Xuat(a, d, c);
    return 0;
}

void Nhap(float a[][500], int& m, int& n)
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

void Xuat(float a[][500], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << setw(10) << fixed << setprecision(2) << a[i][j];
        cout << endl;
    }
}
void TaoMaTranZicZacNgang(float a[][500], int d, int c)
{
    int dem = 1;
    for (int i = 0; i < d; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < c; j++)
                a[i][j] = dem++;
        else
            for (int j = c - 1; j >= 0; j--)
                a[i][j] = dem++;
    }
}
