/* Chuc lap trinh */
// Cho cấu trúc mảng 1 chiều.
// yêu cầu xây dựng các hàm quá tải sau:
// Nhập
// Xuất.
// Cộng
// Viết một chương trình nhập vào 2 mảng 1 chiều, xuất tổng của 2 mảng ra màn hình

// Hướng dẫn nhập:
// Dòng 1: nhập số lượng phần tử mảng thứ 1
// Dòng 2: Nhập các phần tử của mảng thứ 1
// Dòng 3: nhập số lượng phần tử mảng thứ 2
// Dòng 4: nhập số lượng phần tử mảng thứ 2
// Hướng dẫn xuất: xuất ra  các phần tử của mảng mỗi phần tử cách nhau 1 khoảng trắng.

// ví dụ:
// input:
// 3
// 1 2 3
// 4
// 1 2 5 7
// output:
// 2 4 8 7


#include <iostream>
using namespace std;

typedef struct {
	int n;
	int a[100];
	int& operator [] (int i) {
		return a[i];
	}
} M1c;

istream& operator >> (istream& is, M1c& m);
ostream& operator << (ostream& os, M1c m);
M1c operator + (M1c m1, M1c m2);

int main() {
	M1c m1, m2, x;
	cin >> m1;
	cin >> m2;
	
	x = m1 + m2;
	cout<<x;

	return 0;
}

istream& operator >> (istream& is, M1c& m) {
    is >> m.n;
    for (int i = 0; i < m.n; i++) {
		is >> m.a[i];
	}
	return is;
}

ostream& operator << (ostream& os, M1c m) {
	for (int i = 0; i < m.n; i++) {
		os << m.a[i] << " ";
	}
	return os;
}

M1c operator + (M1c m1, M1c m2)
{
    M1c x;
    int maxN = m1.n;
    if (m2.n > maxN) {
        maxN = m2.n;
    }
    x.n = maxN;
    
	for (int i = 0; i < maxN; i++) {
	   x.a[i] = 0;
	   
	   if (i < m1.n) {
	        x.a[i] = x.a[i] + m1.a[i];
	   }
	   
	   if (i < m2.n) {
	       x.a[i] = x.a[i] + m2.a[i];
	   }
	}
	
	return x;
}