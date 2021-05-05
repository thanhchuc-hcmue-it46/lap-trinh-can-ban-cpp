/* Chuc lap trinh */
// Viết chương trình sử dụng hàm đệ quy tính biểu thức sau:
// S(n)=sprt(n+sprt(n-1 +sprt(n-2 +sprt(...+sprt(2 +sprt(1))))))   (n dấu căn)

// Input; Số nguyên dương n (n<=1000)
// Output: kết quả S(n) được làm trong 3 chứ số thập phân

// VÍ DỤ 
// input: 5
// output: 2.736
// giải thích S(5) = sprt(5 +sprt(4 +sprt(3 +sprt(2 +sprt(1))))) = 2.735876582

// lưu ý dử dụng hàm roundf(n * 1000) / 1000 để làm trong n tới 3 chữ số thập phân
//     nếu ko dùng đệ quy sẽ 0đ


#include <iostream>
#include <cmath>

using namespace std;

float can(int n) {
    if (n == 1) return 1;
    else {
        return sqrt(n + can(n-1));
    }
}

int main()
{
    float n;
    cin >> n;
    cout << roundf(can(n) * 1000) / 1000;
    return 0;
}
