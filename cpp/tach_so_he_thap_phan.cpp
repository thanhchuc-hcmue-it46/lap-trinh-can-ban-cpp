#include <iostream>
using namespace std;

int main()
{
    int x, a, b, c, d, ad, bc;
    
    cin>>x;
    a = x / 1000;   x = x % 1000;
    b = x / 100;    x = x % 100;
    c = x / 10;     x = x % 10;
    d = x;
    ad = a * 10 + d;
    bc = b * 10 + c;
    
    cout<<(ad + bc);
    
    return 0;
}