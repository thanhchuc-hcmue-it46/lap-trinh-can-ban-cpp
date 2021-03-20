/* Chuc lap trinh */
// 50kw đầu tiên tính với giá 2500/1kw
// 51-100kw tính với giá 3000/1kw
// 101-200kw tính với giá 5000/1kw
// trên 200kw thì xuất "CAT DIEN"
// nhập số âm thì xuất "NHAP SAI"
// NẾU số nhập vào là 7.5 thì coi như 8; nhập vào 7.3 thì coi như 7
// Tính số tiền phải trả xuất số tiền là số nguyên

// ví dụ 
// input 20 ; output 50000

#include <iostream>

using namespace std;

int main()
{
    double n,s;
    cin>>n;
    if (n<0)
    {
        cout << "NHAP SAI";
    }
    else if (n >= 200)
    {
        cout << "CAT DIEN";
    }
    else {
        int phanNguyen = (int)n;
        double phanThapPhan = n - phanNguyen;
        if (phanThapPhan < 0.5)
        {
            n = phanNguyen;
        }
        else
        {
            n = phanNguyen + 1;
        }
        
        
        if (n <= 50)
        {
            s = n * 2500;
        }
        else if (n <= 100)
        {
            s = 50 * 2500 + (n-50) * 3000;
        }
        else if (n < 200)
        {
            s = 50 * 2500 + 50 * 3000 + (n-100) * 5000;
        }
        cout << s;
    }
    return 0;
}
