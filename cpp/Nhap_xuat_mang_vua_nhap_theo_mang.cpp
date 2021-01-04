/* Chuc lap trinh */
// input:
// Dong 1: nhap vao 1 mang
// output:
// Dong 1: xuất mảng vừa nhập
// vi du:
// input:
// 4 5 6
// output
// 4 5 6

#include <iostream>
using namespace std;


int main ()
{
    int a[100];
    int x, n;
    
    // Nhap mang a chua biet truoc do dai n (n <= 100)
    x = 0;
    n = 0;
    while (cin >> x) {
        a[n] = x;
        n++;
    }
    
    // In gia tri mang a
    for (int i=0; i<n; i++)
    {
       cout<<a[i]<<" ";
    }
    return 0;
}
