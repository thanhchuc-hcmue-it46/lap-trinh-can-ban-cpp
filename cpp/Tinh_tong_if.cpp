/* Copyright@2020 by Thanh Chuc Le */
// nhap so nguyen co 3 chu so , tinh tong 3 chu so do
// Ví dụ:

// Input 123

// Output 6

#include <iostream>
using namespace std;

int main ()
{
    int x,a,b,c,d;
    cin>>x;
    a = x / 100; x = x % 100;
    b = x / 10;
    c = x % 10;
    d = a + b + c;
    cout<<d;
    return 0;
}