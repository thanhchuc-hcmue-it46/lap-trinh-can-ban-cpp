/* Chuc lap trinh */
// Cho dãy a chưa n số nguyên dương được nhập từ bàn phím. Viết chương trình;
// a, Tìm số nguyên tố lớn nhất của dãy a;
// b, Tìm tổng các chữ số của tất cả các số của dãy a;
// input 8
//       2016, 1975, 20, 11, 30, 4, 5, 1 
// output 11
//        48

#include <iostream>
using namespace std;

bool laSoNguyenTo(int x);
int tongCacChuSo(int y);

int main()
{
    int n, s=0;
    cin>>n;
    int a[100];
    int b[100];
    int k = 0;
    
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (laSoNguyenTo(a[i]))
        {
           b[k] = a[i];
           k++;
        }
        
    }
    
    int laSoNguyenToMax = b[0];
    for (int i=0; i<k; i++)
    {
        if (b[i] > laSoNguyenToMax)
        {
            laSoNguyenToMax = b[i];
        }
    }
    cout<<laSoNguyenToMax<<" \n";
    
    for (int i=0; i<n; i++)
    {
        s = s + tongCacChuSo(a[i]);
    }
    cout<<s;
  
    return 0;
}
bool laSoNguyenTo(int x)
{
    if (x > 1)
    {
        for (int i=2; i<=x/2; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

int tongCacChuSo(int y)
{
    int t = 0;
    
    while (y != 0)
    {
        t = t + (y % 10);
        y = y / 10;
    }
    
    return t;
}