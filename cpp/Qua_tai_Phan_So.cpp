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
// input
// 1 2
// 2 4
// output:
// 1/1


#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
	int tu, mau;
}PhanSo;

// khai bao 
istream& operator >> (istream& is, PhanSo& p);
ostream& operator << (ostream& os, PhanSo p);

PhanSo operator +(PhanSo p1, PhanSo p2);
bool operator == (PhanSo p1, PhanSo p2);
bool operator != (PhanSo p1, PhanSo p2);

PhanSo rutgon(PhanSo p);
int UCLN(int x, int y);

int main()
{
	PhanSo p1, p2, kq;
	cin >> p1 >> p2;
	kq = p1 + p2;

	cout << kq;
	return 0;
}

istream& operator >> (istream& is, PhanSo& p)
{
	is >> p.tu >> p.mau;
	return is;
}
ostream& operator << (ostream& os, PhanSo p)
{
	os << p.tu << "/" << p.mau;
	return os;
}

PhanSo operator +(PhanSo p1, PhanSo p2)
{
	PhanSo kq;
	kq.tu = p1.tu*p2.mau + p1.mau*p2.tu;
	kq.mau = p1.mau*p2.mau;
	return rutgon(kq);
}

bool operator == (PhanSo p1, PhanSo p2)
{
	return (p1.tu*p2.mau == p1.mau*p2.tu);
}

bool operator != (PhanSo p1, PhanSo p2)
	{
		return !(p1==p2);
	}
PhanSo rutgon(PhanSo p) {
	int a = UCLN(p.tu, p.mau);
	p.tu /= a;
	p.mau /= a;
	return p;
}


int UCLN(int x, int y)
{
	x = abs(x);
	y = abs(y);

	while (y > 0) {
		int b = x % y;
		x = y;
		y = b;

	}
	return x;
}

