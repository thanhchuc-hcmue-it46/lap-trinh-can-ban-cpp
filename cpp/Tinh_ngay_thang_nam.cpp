/* Chuc lap trinh */
Hôm nay 22/1/2021, hỏi M ngày sau là ngày mấy, biết M ngày sau vẫn thuộc năm 2021

input   Nhập số nguyên M (0<=M<=300)
output  Ngày định dạng ngày/tháng/năm

input   2
output  24/1/2021

#include <iostream>
using namespace std;

int main()
{
    int M, dd;
    int ngay = 22, thang = 1, nam = 2021;
    int t[13] = {0, 9, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    cin>>M;
    
    if (M - t[1] <= 0)
    {
        dd = ngay + M;
        cout<<dd<<"/"<<thang<<"/"<<nam;
    }
    else {
        for (int i = 2; i < 13; i++) {
            M = M - t[i-1];
            if (M <= t[i]) {
                ngay = M;
                thang = i;
                cout<<ngay<<"/"<<thang<<"/"<<nam;
                break;
            }
        }
    }
    
    return 0;
}