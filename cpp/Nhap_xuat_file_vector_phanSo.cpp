/* Chuc lap trinh */
// Yêu cầu Phải dùng Vector để thực hiện các yêu cầu sau:
// 1.xây dựng cấu trúc PhanSo để lưu các phân số (gôm 2 thàn phần tử và mẫu là các số nguyên khong âm)
// 2.Nhập vào danh sách các phân số và xuất chúng theo thứ tự: các phân số nhập vào theo thứ tự lẻ rồi đến các phân số được nhập vào theo thứ tự chẵn
// 3.Ta quy ước: phân số được gọi là phân số đẹp nếu chứng có cả tử và mẫu là số chẵn . Còn lại đều là phân số xấu
//     3.1. Hãy tìm Phân số đẹp lớn nhất, tính tổng các phân số đẹp 
//     3.2. Hãy tìm phan số xấu nhỏ nhất, tính tích các phân số xấu 
// 4. Xuất danh sách phân số đẹp theo thứ tự giảm dần
// 5. xuất danh sách phân số xấu theo thứ tự tăng dần

// Lưu ý: Vì không rút gọn nên nếu 2 phân số có giá trị bằng nhau thì phân số nào có tử bé hơn sẽ coi như "bé hơn". Ví dụ: do 1/2, 5/10,
// 3/6 đều có giá trị bằng nhau(đều cùng bằng 0.5). Nhưng khi sắp xếp tăng dần thì thứ tự đúng sẽ là : 1/2, 3/6, 5/10. Còn sắp xếp tăng dần thì kết quả là : 5/10, 3/6, 1/2

// INPUT: dữ liệu nhập từ file "EM_SE_CO_GANG_LAM_BAI_TOT.INP"
//     Gồm nhiều dòng, mỗi dòng gồm 2 số nguyên cách nhau 1 khoảng trắng là tử và mẫu của phân số

// OUTPUT: dữ liệu xuất ra file "EM_XIN_HUA_LAM_BAI_NGHIEM_TUC.OUT"
//     D1: xuất dữ liệu theo yêu cầu thứ 2 ở trên. Mỗi phần tử xuất theo 
//     định dạng tử/mãu
//     D2: Phân số đẹp Max và tổng các phân số đẹp(rút gọn phân số tổng tìm được)
//     D3: phân số xấu Min và tích các phân số xấu(rút gọn phân số tích tìm được)
//     D4:Xuất danh sách các phân số đẹp theo thứ tự tăng dần
//     D5:Xuất danh sách các phan số xấu theo thứ tự giảm dần

// VÍ DỤ 
//     EM_SE_CO_GANG_LAM_BAI_TOT.INP     EM_XIN_HUA_LAM_BAI_NGHIEM_TUC.OUT   
//     1 2                                 1/2 2/4 3/5 2/3 4/3 8/2
//     2 3                                 8/2 9/2
//     2 4                                 1/2 4/15
//     4 3                                 2/4 8/2
//     3 5                                 4/3 2/3 3/5 1/2
//     8 2

#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <algorithm>
using namespace std;

int UCLN(int x, int y) {
    x = abs(x);
    y = abs(y);
    while (y > 0) {
		int b = x % y;
		x = y;
		y = b;

	}
	return x;
}

struct PS {
    int tu = 0, mau = 1;

    bool laPhanSoChan() {
        return (tu % 2 == 0 && mau % 2 == 0);
    }

    PS rutGon() {
        int a = UCLN(tu, mau);
        PS tmp;
        tmp.tu = tu / a;
        tmp.mau = mau / a;
        return tmp;
    }
};

istream& operator >> (istream& is, PS &p) {
    is >> p.tu >> p.mau;
    return is;
}

ostream& operator << (ostream& os, PS p) {
    os << p.tu << "/" << p.mau;
    return os;
}



PS operator + (PS p1, PS p2) {
    PS kq;
    kq.tu = p1.tu * p2.mau + p1.mau *p2.tu;
    kq.mau = p1.mau * p2.mau;
    return kq.rutGon();
}

PS operator * (PS p1, PS p2) {
    PS kqt;
    kqt.tu = p1.tu * p2.tu;
    kqt.mau = p1.mau * p2.mau;
    return kqt.rutGon();
}

bool operator > (PS p1, PS p2) {
    if (p1.tu * p2.mau > p1.mau * p2.tu) {
        return true;
    }

    if (p1.tu * p2.mau == p1.mau * p2.tu) {
        if (p1.tu > p2.tu){
           return true; 
        }
        
    }
    
    return false;
}

bool operator < (PS p1, PS p2) {
    if (p1.tu * p2.mau < p1.mau * p2.tu) {
        return true;
    }
    if (p1.tu * p2.mau == p1.mau * p2.tu) {
        if (p1.tu < p2.tu){
           return true; 
        }
        
    }
    
    return false;
}

int main()
{
    ifstream ifile ("EM_SE_CO_GANG_LAM_BAI_TOT.INP");
    ofstream ofile ("EM_XIN_HUA_LAM_BAI_NGHIEM_TUC.OUT");

    vector <PS> vPhanSo;

    while (!ifile.eof()) {
        PS p;
        ifile >> p;
        vPhanSo.push_back(p);
    }

    // In dong 1
    for (int i=0; i < vPhanSo.size(); i+=2) {
        ofile << vPhanSo.at(i) << " ";
    }
    for (int i = 1; i < vPhanSo.size(); i+=2) {
        ofile << vPhanSo.at(i) << " ";
    }

    ofile << endl;

    // In dong 2
    PS psChanMax;
    PS tongPSchan;
    tongPSchan.tu = 0;
    tongPSchan.mau = 1;
    for (int i = 0; i < vPhanSo.size(); i++) {
        if (vPhanSo.at(i).laPhanSoChan()) {
            if (vPhanSo.at(i) > psChanMax) {
                psChanMax = vPhanSo.at(i);
            }
            tongPSchan = tongPSchan + vPhanSo.at(i);
        }
    }
    ofile << psChanMax << " " << tongPSchan.rutGon() << endl;

    //In dong 3
    PS psLeMin;
    PS tichPSle;
    tichPSle.tu = 1;
    tichPSle.mau = 1;
    for (int i = 0; i < vPhanSo.size(); i++) {
        if (vPhanSo.at(i).laPhanSoChan() == false) {
            if (psLeMin.tu == 0) {
                psLeMin = vPhanSo.at(i);
            }
            if (vPhanSo.at(i) < psLeMin) {
                psLeMin = vPhanSo.at(i);
            }
            tichPSle = tichPSle * vPhanSo.at(i);
        }

    }
    ofile << psLeMin << " " << tichPSle.rutGon() << endl;
    
    //In dong 4
    vector <PS> vToanPSchan;
    for (int i = 0; i < vPhanSo.size(); i++) {
        if (vPhanSo.at(i).laPhanSoChan()) {
            vToanPSchan.push_back(vPhanSo.at(i));
        }
        
    }
    // Vector cac phan so duoc sap xep tang dan theo gia tri
    sort(vToanPSchan.begin(), vToanPSchan.end());
    for (int i = 0; i < vToanPSchan.size(); i++) {
        ofile << vToanPSchan.at(i) << " ";
    }
    ofile << endl;
    
    //In dong 5
    vector <PS> vPSxau;
    for (int i = 0; i < vPhanSo.size(); i++) {
        if (vPhanSo.at(i).laPhanSoChan() == false) {
            vPSxau.push_back(vPhanSo.at(i));
        }
    }
    // Vector cac phan so duoc sap xep giam dan theo gia tri
    sort(vPSxau.begin(), vPSxau.end(), greater<PS>());
    for (int i = 0; i < vPSxau.size(); i++) {
        ofile << vPSxau.at(i) << " ";
    }
    
    ifile.close();
    ofile.close();
    return 0;
}
