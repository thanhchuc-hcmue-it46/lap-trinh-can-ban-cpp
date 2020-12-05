/* Copyright@2020 by Thanh Chuc Le */
// Viết chương trình in ra màn hình tam giác sao cân với chiều cao h nhập vào từ bàn phím.
// Ví dụ 1:
// Input	Output
// 3       __*__
//         _***_
//         *****
// Ví dụ 2:
// Input	Output
// 5       ____*____
//         ___***___
//         __*****__
//         _*******_
//         *********
// Lưu ý: 
// Xuất chính xác từng ký tự. Không xuất dư hoặc thiếu khoảng trắng, không xuất dư endl dòng cuối cùng.
// Các ký tự gạch nối màu đen (_) ở phía trên đại diện cho khoảng trắng mà các bạn phải xuất ra màn hình.
//  Phải có các khoảng trắng này thì mới được tính là tam giác cân

#include <iostream>
using namespace std;

int main ()
{
	int n,i,j;
	cin>>n;
	
	int soLuongDauSao = 1;
	int soLuongDauCach = n;
	for (int i=1; i<=n; i++)
	{
	    // in dấu cách
	    for (int j=1; j<=soLuongDauCach; j++)
	    {
	        cout<<" ";
	    }
	    for (int j=1; j<=soLuongDauSao; j++)
	    {
	        cout<<"*";
	    }
	  
	    cout<<""<<"\n";
	    
	    soLuongDauSao = soLuongDauSao + 2;
	    soLuongDauCach = soLuongDauCach - 1;
	}

	return 0;
}
