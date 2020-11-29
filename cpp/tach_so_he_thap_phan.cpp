/* Copyright@2020 by Thanh Chuc Le */

// Nhập vào 1 số gồm 4 chữ số abcd, yêu cầu tính tổng của: ad + bc
// Ví dụ:
// Input: 1234
// Output: 14+23=37

#include <iostream>
using namespace std;

int main()
{
    int x, a, b, c, d, ad, bc;
    
    cin>>x;
    if (x <= 9999) {
    }
    a = x / 1000;   x = x % 1000;
    b = x / 100;    x = x % 100;
    c = x / 10;     x = x % 10;
    d = x;
    ad = a * 10 + d;
    bc = b * 10 + c;
    
    cout<<ad<<"+"<<bc<<"="<<(ad + bc);
    
    return 0;
}