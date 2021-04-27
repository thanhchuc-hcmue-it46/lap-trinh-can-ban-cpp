/* Chuc lap trinh */

// Nhập một chuỗi kí tự bao gồm các ký tự từ A đến Z, a đến z, 0 đến 9 và khoảng trắng. Tính trung bình cộng các số xuất hiện trong chuỗi.
// Yêu cầu lấy 2 chữ số thập phân ở kết quả xuất ra.
// Ví dụ:
// Input   
//     ngay17thang12nam2019

// Output
//     682.67

// Giải thích: (17+12+2019)/3=682.67.
// Lưu ý: Kết quả chấm sai số 0.01

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string s; // thuc ra s la mang 1 chieu char[n] , moi phan tu la mot ki tu kieu char 
    getline(cin, s);
    
    float sum = 0; //tong cua tat ca cac so tim duoc
    int count = 0; //dem co bao nhieu so tim duoc
    float num = 0; //so hien tai dang doc
    
    for (int i=0; i < s.length(); i++) {
        if (s[i] <= '9' && s[i] >= '0') {
            float x = s[i] - '0'; //x la so tai vi tri thu i trong chuoi s
            num = num * 10 + x;
            
            // neu ki tu ben phai khong phai la so thi cong don num vao sum
            if (i + 1 < s.length()) {
                if (s[i + 1] > '9' || s[i + 1] < '0') {
                    count++;
                    sum = sum + num;
                    num = 0; //khoi tao lai num cho so tiep theo neu con
                }
            }
            else {
                // da het ki tu ben phai de kiem tra roi
                if (num > 0) {
                    count++;
                    sum = sum + num;
                }
            }
            
        }
    }

    if (count != 0) {
        cout << roundf(sum/count * 100) / 100;
    }
    
    return 0;
}
