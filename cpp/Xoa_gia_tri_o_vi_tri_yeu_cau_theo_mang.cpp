/* Chuc lap trinh */
// Nhập:
// Dòng 1: nhập vị trí cần xóa
// Dòng 2: nhập vào 1 dãy số

// Xuất:
// mảng sau khi xóa

// ví dụ:
// input:
// 2
// 1 2 3 4
// output:
// 1 2 4

#include <iostream>
using namespace std;

int main ()
{
    int x,n,m;
    int a[100];
    cin>>x;
    m=0;
    n=0;
    while (cin>>m)
    {
        a[n]=m;
        n++;
    }
    // cach 1 dung if
    for (int i = 0; i < n; i++)
    {
        if (i != x)
        {
            cout<<a[i]<<" ";
        }
    }
    // cach 2 in lam 2 lan
    // for (int i=0; i<x; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // for (int j=x+1; j<n; j++)
    // {
    //     cout<<a[j]<<" ";
    // }
    return 0;
}