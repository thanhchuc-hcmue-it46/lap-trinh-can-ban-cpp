/* Chuc lap trinh */
// Cho cấu trúc Phân số gồm tử và mẫu.
// yêu cầu xây dựng các hàm quá tải sau:
// 1. Nhập
// 2. Xuất.
// 3. Gán
// 4. Cộng
// 5. So sánh bằng
// 6. So sánh khác
// Viết một chương trình nhập vào 2 phân số, yêu cầu xuất như sau

// xuất tổng 2 phân số (sau khi rút gọn)
// ví dụ:

// input:

// 1 2

// 2 4

// output:

// 1/1


#include <iostream>
using namespace std;

typedef struct {
    int tu, mau;
} PhanSo;

PhanSo operator + (PhanSo x, PhanSo y);
PhanSo operator * (PhanSo x, PhanSo y);
bool operator != (PhanSo x, PhanSo y);
bool operator == (PhanSo x, PhanSo y);

istream& operator >> (istream& is, PhanSo& p);
ostream& operator << (ostream& os, PhanSo p);

int UCLN (int x, int y);

int main()
{
    PhanSo p1, p2, kq;
    cin>>p1;
    cin>>p2;
    
    kq = p1 + p2;
    kqn = p1 * p2;
    int uc = UCLN(kq.tu, kq.mau);
    kq.tu = kq.tu / uc;
    kq.mau = kq.mau / uc;

    cout<<kq;
    return 0;
}

istream& operator >> (istream& is, PhanSo& p)
{
   is>>p.tu>>p.mau;
   return is;
}

ostream& operator << (ostream& os, PhanSo p)
{
    os<<p.tu<<"/"<<p.mau;
    return os;
}


PhanSo operator + (PhanSo x, PhanSo y)
{
    PhanSo kq;
    kq.tu = x.tu * y.mau + x.mau * y.tu;
    kq.mau = x.mau * y.mau;
    return kq;
}

PhanSo operator * (PhanSo x, PhanSo y)
{
    PhanSo kqn;
    kqn.tu = x.tu * y.tu;
    kqn.mau = x.mau * y.mau;
    return kqn;
}

bool operator != (PhanSo x, PhanSo y)
{
    return (x.tu * y.mau - x.mau * y.tu != 0);
}
bool operator == (PhanSo x, PhanSo y)
{
    return (x.tu * y.mau - x.mau * y.tu == 0);

}

int UCLN (int x, int y)
{
      if (x == 0 || y == 0)
    {
        return x+y;
    }
    if (x == y)
    {
        return x;
    }
    while (x != y)
    {
       if (x > y)
        {
            x = x - y;
        }
        else if (y > x)
        {
            y = y - x;
        }
    }
    return x;
}



