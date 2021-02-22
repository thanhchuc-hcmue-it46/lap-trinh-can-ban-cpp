/* Chuc lap trinh */
// Nhập vào 2 số a và b, yêu cầu xuất ra bội chung nhỏ nhất của 2 số đó.

// ví dụ:
// input:
// 2 3
// output
// 6

#include <iostream>

using namespace std;

int Ucnl (int x, int y);
int main()
{
    int a,b,Bcnn,ucln;
    cin>>a>>b;
    ucln = Ucnl(a,b);
    if (ucln != 0)
    {
        Bcnn = (a*b)/ucln;
        cout << Bcnn;
    }
    else 
    {
        cout << 0;
    }
    
    return 0;
}

int Ucnl (int x, int y)
{
    if (x == 0 || y == 0)
    {
        return x+y;
    }
    if (x == y)
    {
        return x;
    }
    while (y != x)
    {
       if (x > y)
        {
            x = x - y;
        }
        else if (y > x)
        {
            y = y - x;
        }
    }
    return x;
}