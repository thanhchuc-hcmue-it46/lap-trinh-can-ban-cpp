#include <iostream>
#include <string.h>

using namespace std;

typedef struct
{
    int ngay;
    int thang;
    int nam;
} NgayThangNam;

bool laSoNguyenTo(int n);
bool laNguyenToCungNhau(int c1, int c2);

int main()
{
    int n;
    cin>>n;
    
    NgayThangNam a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].ngay>>a[i].thang>>a[i].nam;
    }
    
    // Dong 1: in NgayThangNam theo thu tu nguoc lai so voi luc nhap
    for (int i = n-1; i >= 0; i--)
    {
        cout<<a[i].ngay<<"/"<<a[i].thang<<"/"<<a[i].nam<<" ";
    }
    cout<<endl;
    
    // Dong 2: in NgayThangNam co nam nho nhat, NgayThangNam co nam lon nhat
    NgayThangNam b1 = a[0];
    NgayThangNam b2 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i].nam < b1.nam)
        {
            b1 = a[i];
        }
        if (a[i].nam > b2.nam)
        {
            b2 = a[i];
        }
    }
    cout << b1.ngay<<"/"<<b1.thang<<"/"<<b1.nam<<" "<<b2.ngay<<"/"<<b2.thang<<"/"<<b2.nam;
    cout << endl;
    
    // Dong 3: in so luong NgayThangNam co nam la so nguyen to
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (laSoNguyenTo(a[i].nam) == true)
        {
            x++;
        }
    }
    cout << x << endl;
    
    // Dong 4: in so luong NgayThangNam co ngay va thang la so nguyen to cung nhau
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        if (laNguyenToCungNhau(a[i].ngay, a[i].thang))
        {
            y++;
        }
    }
    cout << y;
    return 0;
}

bool laSoNguyenTo(int n)
{
    if (n > 1)
    {
        for (int i=2; i <= n/2; i++)
        {
           if (n % i == 0)
           {
              return false;
           }
            
        }
        
        return true;
        
    }
    return false;
}

bool laNguyenToCungNhau(int c1, int c2)
{
    int ucln = 1;
    int tmpC1 = c1;
    int tmpC2 = c2;
    while (tmpC1 != tmpC2)
    {
        if (tmpC1 == tmpC2)
        {
            ucln = tmpC1;
        }
        else if (tmpC1 > tmpC2)
        {
            tmpC1 = tmpC1 - tmpC2;
        }
        else
        {
           tmpC2 = tmpC2 - tmpC1; 
        }
    }
    ucln = tmpC1;
    
    if (ucln == 1)
    {
        return true;
    }
    
    return false;
}
