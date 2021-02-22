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
int Bcnn (int c, int d);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<Bcnn(a,b);
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

int Bcnn (int c, int d)
{
    int ucln = Ucnl(c,d);
    if (ucln != 0)
    {
        return (c*d)/ucln;
    }
    else 
    {
        return 0;
    }
    
}