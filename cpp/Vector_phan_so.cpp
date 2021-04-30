/* Chuc lap trinh */

// Yêu cầu phải sử dụng vector để thực hiện các yêu cầu sau:
// 1. Xây dựng cấu trúc dữ liệu để lưu trữ các Phân số (PS), bao gồm tử số và mẫu số (kiểu số nguyên)
// 2. Nhập danh sách các PS và xuất ra theo thứ tự ngược lại
// 3. In ra PS có tử số nhỏ nhất và PS có mẫu số lớn nhất (trước khi rút gọn)
// 4. Sắp xếp các PS giảm dần theo giá trị.
// Input:
// Nhiều dòng, mỗi dòng là 1 cặp số nguyên cho biết tử số và mẫu số
// Output:     
// Dòng 1: danh sách các PS theo thứ tự ngược lại so với thứ tự nhập. Mỗi PS được in ra theo định dạng {tử số}/{mẫu số}, mỗi PS cách nhau 1 khoảng trắng
// Dòng 2: PS có tử số nhỏ nhất và PS có mẫu số lớn nhất
// Dòng 3: danh sách các PS được sắp xếp giảm dần theo giá trị.

// Ví dụ:
// Input                                       Output
// 1 2                                         7/8 5/6 4/3 1/2

// 4 3                                         1/2 7/8

// 5 6                                         4/3 7/8 5/6 1/2

// 7 8


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
  int tu, mau;  
} PS;

istream& operator >> (istream &is, PS &p) {
    is >> p.tu >> p.mau;
    return is;
}
ostream& operator << (ostream &os, PS p) {
    os << p.tu <<"/"<< p.mau << " ";
    return os;
}

//sap xep pd giam dan theo gia tri
bool operator < (PS p1, PS p2) {
    return (p1.tu*p2.mau < p2.tu*p1.mau);
}
bool operator > (PS p1, PS p2) {
    return (p1.tu*p2.mau > p2.tu*p1.mau);
}
// tim ps co tu min, mau max
PS min(vector <PS> x) {
    PS min = x[0];
    for (int i = 0; i < x.size(); i++) {
        if (x[i].tu < min.tu) {
            min = x[i];
        }
        
    }
    return min;
}

PS max(vector <PS> x) {
    PS max = x[0];
    for (int i = 0; i < x.size(); i++) {
        if (x[i].mau > max.mau) {
            max = x[i];
        }
        
    }
    return max;
}



int main()
{
    vector <PS> vectorPS;
    PS ps;
    //nhap
    while (cin >> ps) {
		vectorPS.push_back(ps);
	}
    
    //xuat danh sach nguoc lai
    vector <PS>:: reverse_iterator rite;
    for (rite = vectorPS.rbegin(); rite != vectorPS.rend(); ++rite) {
        cout << *rite << " ";
    }
    
    //xuat ps co tu min, mau max
    cout << endl << min(vectorPS) << " " << max(vectorPS) << endl;
    
    //ds ps duoc sap xep giam dan theo gia tri
    sort(vectorPS.begin(), vectorPS.end(), greater<PS>());
    for (int i = 0; i < vectorPS.size(); i++) {
        cout << vectorPS.at(i) << " ";
    }
    return 0;
}







