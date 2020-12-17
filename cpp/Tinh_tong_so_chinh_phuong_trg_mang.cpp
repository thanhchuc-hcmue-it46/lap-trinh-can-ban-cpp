/* Chuc lap trinh */
// Input:
// - Dòng 1: Nhập vào N là số lượng phần tử của mảng
// - Dòng 2: N số nguyên (mỗi số cách 1 khoảng trắng)
// Ouput:
// Yêu cầu xuất tổng các số chính phương ra màn hình
// ví dụ:
// input:          output
// 4               5
// 1 2 3 4

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int a[100],n,T;
    int s=0;
    
    
    cin>>n;
     for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        T = sqrt(a[i]) ;
        if (T*T == a[i])
        {
            s += a[i];
        }
    }
    cout<<s;
return 0;
}