/* Chuc lap trinh */
// Cho một bảng vuông (n x n) ô (2<=n<=100) các ô ghi các số là 0 hoặc 1. Tìm  đường đi của Robot, từ góc trái  trên xuống góc 
// phải dưới theo nguyên tắc chỉ được dịch chuyển sang phải và xuống dưới sao cho các số trên đường đi tạo thành một số nhị 
// phân có giá trị lớn nhất.

// Dữ liệu vào
// -   Dòng đầu tiên ghi giá trị  n
// -   n dòng tiếp theo, trên mỗi dòng ghi n số 0 hoặc 1 các số này cách nhau ít nhất một khoảng trắng.
// Dữ liệu ra: gồm một số duy nhất là giá trị thập phân của số nhị phân được tạo thành ở trên.

// ví dụ:
// input
// 5
// 1 0 1 1 0
// 0 0 1 0 1
// 0 0 1 0 1
// 1 0 0 1 1
// 1 1 0 1 0

// input:
// 374

// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <cmath>
#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100];
int dx[] = {0, 1};
int dy[] = {1, 0};
string ddi, ddi_max;

void Try(int i, int j){
    if (i == n && j == n){
        if (ddi >= ddi_max) 
        {
            ddi_max = ddi;
        }
        
    }
    else{
        for (int k = 0; k < 2; k++){
            int x = i + dx[k];
            int y = j + dy[k];
            if (x >= 1 && x <= n && y >= 1 && y <= n && a[x][y] != -1){
                ddi += (char)(a[x][y] + '0');
                Try(x, y);
                ddi.erase(ddi.size() - 1, 1);
            }
        }
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
            ddi_max += "1";
        }
    }
    ddi += (char)(a[1][1] + '0');
    ddi_max = "0";
    Try(1, 1);
    string s = "";
    for (int i = 0; i < ddi_max.size(); i++){
        s = ddi_max[i] + s;
        
    }
    
    reverse(ddi_max.begin(), ddi_max.end());
    int kq = 0;
    for (int i = 0; i < ddi_max.size(); i++){
        if (ddi_max[i] == '1'){
            kq += pow(2, i);
        }
    }
    cout << kq << endl;
    return 0;
}


