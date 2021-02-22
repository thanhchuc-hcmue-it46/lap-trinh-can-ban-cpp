/* Chuc lap trinh */
//Một phân số gồm tử  và mẫu (tử và mẫu là 2 số nguyên lớn hơn bằng 0 và bé hơn 100).
// Yêu cầu viết chương trình nhập vào 2 phân số, yêu cầu xuất phân số tổng của 2 phân số đó (phân số tổng được rút gọn, sau đó xuất ra màn hình)

// Nếu input có phân số nào có mẫu bằng 0 thì xuất kết quả ra -1

// Dữ liệu đầu vào: gồm 2 dòng, mỗi dòng gồm 2 số nguyên cách nhau tối thiểu 1 khoảng trắng.

// Dữ liệu đầu ra: gồm 1 dòng duy nhất chứa phân số tổng (sau khi rút gọn) của 2 phân số ban đầu, xuất theo dạng: tửsố/mẫusố

// Ví dụ 1:

// Input	Output
// 1 2       5/6
// 1 3

// Ví dụ 2:

// Input	Output
// 1 2       -1
// 1 0



#include <iostream>
using namespace std;

typedef struct
{
    int tu;
    int mau;
    
} PhanSo;

int Ucln (int b, int c);

int main()
{
    
    PhanSo ps1,ps2;
    cin>>ps1.tu>>ps1.mau;
    cin>>ps2.tu>>ps2.mau;
    
    if (ps1.mau == 0 || ps2.mau == 0)
    {
        cout<<"-1";
        return 0;
    }

    int tuSo,mauSo;
    tuSo = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    mauSo = ps1.mau * ps2.mau;
    
    int uc = Ucln(tuSo, mauSo);
    tuSo = tuSo / uc;
    mauSo = mauSo / uc;
    
    cout<<tuSo<<"/"<<mauSo;
    return 0;
}
int Ucln (int b, int c)
{
    if (b == 0 || c == 0)
    {
        return b+c;
    }
    if (b == c)
    {
        return b;
    }
    while (b != c)
    {
       if (b > c)
        {
            b = b - c;
        }
        else if (c > b)
        {
            c = c - b;
        }
    }
    return b;
}