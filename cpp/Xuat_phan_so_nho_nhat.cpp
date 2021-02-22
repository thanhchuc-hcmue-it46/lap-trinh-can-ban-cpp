/* Chuc lap trinh */
// nhập n lad số phân số, rồi nhập phân số, xuất ra phân số nhỏ nhất(đã rút gọn)
// input        2
//            1/2
//            5/25
// output   1/5         
   
#include <iostream>
using namespace std;
typedef struct
{
    int tu;
    int mau;
} PhanSo;

int Ucln (int b, int c);

int main ()
{
    int n;
    int ucln;
    double x, y;
    cin >> n;
    PhanSo a[n];

    for (int i=0; i<n; i++)
    {
        cin>>a[i].tu>>a[i].mau;
    }
    
    PhanSo phanSoMin = a[0];
    for (int i=1; i<n; i++)
    {
        y = phanSoMin.tu * 1.0 / phanSoMin.mau ;
        x = a[i].tu * 1.0 / a[i].mau;
        if (x < y)
        {
            phanSoMin = a[i];
        }
    }
    
    
    // toi gian phanSoMin
    int uc = Ucln(phanSoMin.tu, phanSoMin.mau);
    phanSoMin.tu = phanSoMin.tu / uc;
    phanSoMin.mau = phanSoMin.mau / uc;
    
    cout <<phanSoMin.tu<<"/"<<phanSoMin.mau;
    return 0;
}
int Ucln (int b, int c)
{
    if (b == 0 || c == 0)
    {
        return b+c;
    }
    if (b == c)
    {
        return b;
    }
    while (b != c)
    {
       if (b > c)
        {
            b = b - c;
        }
        else if (c > b)
        {
            c = c - b;
        }
    }
    return b;
}