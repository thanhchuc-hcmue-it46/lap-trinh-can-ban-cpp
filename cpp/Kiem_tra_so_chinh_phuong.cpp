/* Copyright@2020 by Thanh Chuc Le */
// Nhập vào 1 số.

// Kiểm tra số đó có phải là số chính phương không?
// Xuất: yes, nếu đó là số chính phương, ngược lại xuất no

// ví dụ:
// input: 4

// output: yes
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    unsigned int i=sqrt(n);
    if (i*i == n)
    {
        cout<<"yes";
    }
    else 
    {
        cout<<"no";
    }
    return 0;
}