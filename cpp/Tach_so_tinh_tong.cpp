/* Copyright@2020 by Thanh Chuc Le */
// Nhập vào 1 số gồm 2 chữ số, yêu cầu xuất ra tổng chữ số của nó ra màn hình

// ví dụ:
// input:
// 23

// output
// 5

#include <iostream>
using namespace std;

int main ()
{
    int n,a,b,c;
    cin>>n;
    a = n / 10;    n = n % 10;
    b = n ;     
    c = a + b;
    cout<<c;
    
    return 0;
}