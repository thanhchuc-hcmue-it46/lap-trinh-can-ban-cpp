/* Copyright@2020 by Thanh Chuc Le */
// Input: Nhập vào 3 số nguyên theo định dạng sau:
// Dòng 1: 2 số nguyên a và b
// Dòng 2: 2 số nguyên c và d
// Dòng 3: 2 số nguyên e và f
// Output: 
// Xuất ra 1 số duy nhất là kết quả của biểu thức: (a+b+c)/(d+e+f)
// (Lấy chính xác 1 chữ số thập phân)

// Ví dụ:

// Input	Output
// 1 2     0.4
// 3 4
// 5 6
// học được ép kiểu, nhập số nguyên và ép kiểu để tính ra kết quả số thực,số nguyên chia số nguyên thì ra số nguyên,sn có tử > mẫu thì ra 0
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float x;
    int a,b,c,d,e,f;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;

    x = (float) (a+b+c)/(d+e+f);

    cout<<fixed<<setprecision(1)<<x;
    
    return 0;
}