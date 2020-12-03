/* Copyright@2020 by Thanh Chuc Le */

// Giải phương trình ax2+bx+c=0
// Input:
// - Gồm 3 dòng, mỗi dòng là 1 số nguyên, tương ứng với 3 hệ số a,b,c
// Output:
// - Nếu phương trình có nghiệm, xuất nghiệm lấy 4 chữ số thập (nếu có 2 nghiệm xuất mỗi nghiệm ở một hàng riêng biệt)
// - Nếu phương trình vô nghiệm, xuất VN
// - Nếu phương trình vô số nghiệm, xuát VSN.
// Lưu ý: nếu a=0, thì phương trình trở thành phương trình bậc 1
// ví dụ:
// input       output
// 3           2.0000
// 10          1.3333
// 8

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float D,x,x1,x2;
    cin>>a;
    cin>>b;
    cin>>c;
    D = b*b-4*a*c;
    cout<<fixed<<setprecision(4);
    if (a == 0) {
        // Truong hop phuong trinh bac nhat]
        if (b != 0) {
            x = -(float)(c)/b;
            cout<<x;
        }
        else if (b == 0) {
            if (c != 0){
                cout<<"VN";
            }
            if (c == 0){
                cout<<"VSN";
            }
        }
        
    } 
    else {
        
        // Giai phuong trinh bac 2
        if (D == 0) {
            x = ((float)(-b)/(2*a));
           cout<<x;
                
        }
        else if (D > 0) {
            x1 = ((float)((-b) + sqrt(D))/(2*a));
            x2 = ((float)((-b) - sqrt(D))/(2*a));
            cout<<x1<<"\n"<<x2;
    
        }
        else if (D < 0) {
            cout<<"VN";
        }
    
    }
    
        

    return 0;
}