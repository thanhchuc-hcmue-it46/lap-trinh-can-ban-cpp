/* Copyright@2020 by Thanh Chuc Le */
// Giải phương trình Ax + B = 0. Với A, B là hai hệ sô kiểu số nguyên được nhập vào từ bàn phím

// - Nếu phương trình vô nghiệm xuất kết quả: VN
// - Nếu phương trình VSN xuất ra : VSN
// - Nếu phương có nghiệm, xuất ra nghiệm (Lưu ý: kết quả xuất ra là số thực (lấy 2 chữ số thập phân)

// Ví dụ:

// Input	Output
// 2       2.00
// -4
// 2       -1.50
// 3

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float A,B,x;
    cin>>A>>B;
    if (A==0)
    {
        if (B==0)
        {
            cout<<"VSN";
        }
        else if (B!=0)
        {
            cout<<"VN";
        }
    }
    else if (A != 0)
    {
        x = -B/A;
        cout<<fixed<<setprecision(2)<<x;
    }
 
    return 0;
}