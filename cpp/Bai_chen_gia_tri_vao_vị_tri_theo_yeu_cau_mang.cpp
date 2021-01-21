/* Chuc lap trinh */
// Nhập:
// Dòng 1: nhập vị trí cần thêm và giá trị thêm (có giá trị <=100)
// Dòng 2: nhập vào 1 dãy số (dãy số có tối đa 100 phần tử)

// Xuất: 
// Mảng sau khi thêm

// Lưu ý: mảng được đánh chỉ số bắt đầu từ 0

// ví dụ
// input:
// 2 5
// 1 2 3 4
// output:
// 1 2 5 3 4

#include <iostream>
using namespace std;

int main ()
{
    
    // x la vi tri them, y la gia tri them, n la do dai mang
    int x,y;
    cin>>x>>y;
    
    int a[100];
    int n, m;
    m=0;
    n=0;
    while (cin>>m){
        a[n] = m;
        n++;
    }
    //in phan dau toi x cua mang a
    for (int i=0; i<x; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<y<<" ";
    
    //in phan sau tu x toi het mang a
    for (int j=x; j<n; j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;
}