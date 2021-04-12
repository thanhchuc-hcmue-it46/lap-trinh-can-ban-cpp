/* Chuc lap trinh */
Cho k chữ số 1, 2, 3, ..., k (1 ≤ k ≤ 9), hãy liệt kê các chuỗi k-phân có chiều dài n theo thứ tự từ điển (xem ví dụ để hiểu rõ hơn chuỗi k-phân).
Dữ liệu nhập:
- Gồm hai số nguyên k và n cách nhau 1 khoảng trắng (1 ≤ k ≤ 9, 1 ≤ n ≤ 5)
Dữ liệu xuất:
- Dòng đầu tiên là một số nguyên m - số lượng chuỗi k-phân tính được.
- Trong m dòng tiếp theo, mỗi dòng là một chuỗi k-phân, các dòng sắp theo thứ tự từ điển.
Ví dụ
     input  3 2                 2 3             
                            
     output 9                   8 
            11                  111
            12                  112
            13                  121
            21                  122
            22                  211
            23                  212
            31                  222
            32              
            33                                                                                 


#include <iostream>
using namespace std;

int a[6];
int n, k, tong=0;
bool muonIn = false;

void inMang(int a[], int n) {
    for(int i=1; i<=n; i++) {
        cout << a[i];
    }
    
    cout << endl;
}

void lui(int i) {
    for (int j = 1; j <= k; j++) {
        a[i] = j;
        if (i == n) {
            if (muonIn == false) {
                tong++;
            } else {
                inMang(a, n);
            }
        }
        else {
            lui(i + 1);
        }
        
    }
}

int main() {
    cin>>k>>n;
    lui(1);
    cout<<tong<<endl;
    muonIn = true;
    lui(1);
    return 0;
}