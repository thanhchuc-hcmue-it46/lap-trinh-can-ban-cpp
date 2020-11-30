/* Copyright@2020 by Thanh Chuc Le */
// Input:
// Dòng 1: chứa 1 ký tự 
// Dòng 2: chưa 1 ký tự 
// Output:
// Xuất tổng nguyên của 2 ký tự trong input ra màn hình (dựa vào hệ 10 của ký tự trong bảng mã ascii)
// Ví dụ:

// Input	Output
// A       131
// B
// học được ép kiểu,đổi từ ký tự sang số
#include <iostream>
using namespace std;

int main ()
{
    char A,B;
    int x;
    cin>>A>>B;
    x = ((int) A) + ((int) B);
    cout<<x;
    
    return 0;
}