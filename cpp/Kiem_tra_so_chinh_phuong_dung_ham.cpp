/* Chuc lap trinh */
// Nhập vào 1 số.

// Kiểm tra số đó có phải là số chính phương không?
// Xuất: yes, nếu đó là số chính phương, ngược lại xuất no

// ví dụ:
// input: 4

// output: yes
// (dùng hàm)

#include <iostream>
#include <math.h>
using namespace std;

bool kTraSoChinhPhuong(double);
int main ()
{
    double n;
    cin>>n;
    if(kTraSoChinhPhuong(n))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}

bool kTraSoChinhPhuong(double n)
{
    int CanBacHai;
    CanBacHai = sqrt((double)n);
    if (CanBacHai*CanBacHai == n)
    {
        return true;
    }
    return false;
}
