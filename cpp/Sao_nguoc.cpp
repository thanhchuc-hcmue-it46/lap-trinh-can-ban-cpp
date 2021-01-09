/* Chuc lap trinh */
// Viết chương trình in ra màn hình tam giác sao ngược với chiều cao h nhập vào từ bàn phím.

// Ví dụ:
// Input:
// 3

// Output:
// *****
//  *** 
//   *  

// Input:
// 5

// Output:
// *********
//  ******* 
//   *****  
//    ***   
//     *    
   
// Lưu ý: 
// Xuất chính xác từng ký tự. Không xuất dư hoặc thiếu khoảng trắng, không xuất dư endl dòng cuối cùng

#include <iostream>
using namespace std;

int main ()
{
    int h;
    cin>>h;
    int x;
    x = h+h-1;

    int dauSao = x;
    int dauCach = 0;
    for (int i=0; i<=h; i++)
    { 
        for (int j=1; j <= dauCach; j++)
        {
            cout<<" ";
        }
        for (int j=1; j <= dauSao; j++)
        {
            cout<<"*";
        }
        if (i < h-1)
        {
            cout<<"\n";
        }
       
        
        dauSao = dauSao - 2;
        dauCach = dauCach + 1;
    }
   
   
    return 0;
}