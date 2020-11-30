// Nhập vào 1 số gồm 3 chữ số, yêu cầu xuất số đó theo thứ tự ngược lại

// ví dụ
// input 
// 123

// output
// 321



#include <iostream>
using namespace std;

int main ()
{
    int n,a,b,c;
    cin>>n;
    a = n / 100;    n = n % 100;
    b = n / 10;     n = n % 10;
    c = n;
    cout<<c<<b<<a;
    
    return 0;
}