/* Chuc lap trinh */
// Nhập vào 2 số a và b, yêu cầu xuất ra bội chung nhỏ nhất của 2 số đó.

// ví dụ:
// input:
// 2 3
// output
// 6

#include <iostream>

using namespace std;

int main()
{
    int a,b,Bcnn,ucln;
    cin>>a>>b;
    int x,y;
    x = a;
    y = b;
    
    // tim uoc chung lon nhat
    if (x == 0 || y == 0)
    {
        ucln = x + y;
    }
    else if (x == y)
    {
        ucln = x;
    }
    else
    {
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
        ucln = x;
    }
    
    // tim boi chung nho nhat
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