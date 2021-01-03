/* Chuc lap trinh */
// Nhập:
// Dòng 1: nhập độ dài mảng
// Dòng 2: nhập vị trí cần thêm và giá trị thêm (có giá trị <=100)

// Xuất: 
// Mảng sau khi thêm

// Lưu ý: mảng được đánh chỉ số bắt đầu từ 0

// ví dụ
// input:
// 4 2 5
// 1 2 3 4
// output:
// 1 2 5 3 4

#include <iostream>

using namespace std;

int main()
{   // x là vị trí thêm, y là phần tử cần thêm, n là độ dài dãy.
    int x,y,n;
    cin>>n>>x>>y;
    int a[100];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    // in nua dau mang a truoc vi tri x.
    for (int i=0; i<x; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<y<<" ";
    
    //in nua sau mang a sau vi tri x.
    for (int i=x; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
