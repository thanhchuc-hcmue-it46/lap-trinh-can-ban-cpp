/* Chuc lap trinh */
// Cho một dãy số được cho theo quy tắc sau:
// a0 ­= 0
// a1 = 1
// a2i = ai
// a2i+1 = ai+ai+1
// với i = 1, 2, 3, …
// Cho một số n, hãy viết chương trình đệ quy tìm số lớn nhất trong các số a0, a1, a2, a3, …, an
// Input:
//  Nhập vào một con số nguyên n (1 ≤ n ≤ 900)

// Output:
//  Xuất ra giá trị lớn nhất tìm thấy.

// Ví dụ:
// Input   5

// Output  3

#include <iostream>
#include <cmath>

using namespace std;

int a[900];

void sinhMang(int n) {
    if (n == 0) {
        a[0] = 0;
    }
    else if (n == 1) {
       a[1] = 1;
    }
    else {
        // sinh cac phan tu truoc n cua mang a
        sinhMang(n - 1);
        
        if (n % 2 == 0) {
            int i = n/2;
            a[n] = a[i];
        }
        else {
            int i = (n - 1)/2;
            a[n] = a[i] + a[i + 1];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    
    sinhMang(n);
    int max = a[0];
    
    for (int i = 1; i<=n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
