/* Copyright@2020 by Thanh Chuc Le */
// Viết chương trình nhập vào 3 số nguyên là ngày tháng năm. Hãy xác định ngày tháng năm có hợp lệ hay không?
// Lưu ý:
// - Ngày phải tương ứng với tháng
// - Tháng phải từ 1 đến 12
// - Năm phải >= 1900
// - Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
// Input: 3 số nguyên dương
// Output: YES (hợp lệ), NO (không hợp lệ)
// Vd:
// Input: 28 9 2017
// Output: YES

#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;
    cin>>a>>b>>c;
    
    // Vung tinh toan
    if (c>=1900) {
        
        // Nhung thang 31 ngay
        if ((b==1 || b==3 || b==5|| b==7 || b==8 || b==10 || b==12) && (a>=1 && a<=31)) {
            cout<<"YES";
        }
        // Nhung thang 30 ngay
        else if ((b==4 || b==6 || b==9 || b==11) && (a>=1 && a<=30)) {
            cout<<"YES";
        }
        else {
            
            // Gio chi con thang 2 Hoan la ngay khong nam trong ca khoang tren vd no nha 34
            
            if (b == 2) {
                if (c % 400 == 0 || (c%4 == 0 && c%100 != 0)) {
                    
                    // No la nam nhuan. Nen thang 2 co 29 ngay
                    if (a >= 1 && a <= 29) {
                        cout<<"YES";
                    } else {
                        cout<<"NO";
                    }
                    
                } else {
                    
                    // No khong phai la nam nhuan. Nen thang 2 co 28 ngay
                    if (a >= 1 && a <= 28) {
                        cout<<"YES";
                    } else {
                        cout<<"NO";
                    }
                    
                }
            } else {
                // khong phai thang 2 thi ngay nhap sai vd 34
                cout<<"NO";
            }
        }
    }
    else
    {
        cout<<"NO";
    }

   
    return 0;
}