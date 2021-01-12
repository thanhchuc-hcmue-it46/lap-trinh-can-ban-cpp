/* Chuc lap trinh */
// nhập n là số nguyên, tính theo công thức sau
//  s= 1 + (2!)/(1+2) +...+ (n!)/(1+2+3+...+n)
// làm tròn đế số thập phân thứ 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double b,s=0,a=0,p=1;
    for (int i=1; i<=n; i++)
    {
        p=p*i;
        a=a+i;
        s=p/a;
        b=b+s;
        
    }
    cout<<fixed<<setprecision(2)<<b;
    return 0;
}
