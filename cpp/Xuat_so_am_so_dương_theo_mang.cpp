/* Chuc lap trinh */
// Input:
// - Dòng 1: Nhập vào N là số lượng phần tử của mảng
// - Dòng 2: N số nguyên (mỗi số cách 1 khoảng trắng)

// Ouput:
// - Dòng 1: xuất các số âm của dãy
// - Dòng 2: xuất các số dương của dãy

#include <iostream>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    int a[100];
    // nhập mảng a có N phần tử
    for (int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    
    //in những phần tử nhỏ hơn 0
    for (int i=0; i<N; i++)
    {
        if (a[i] < 0)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
    
    //in những phần tử lớn hơn 0
    for (int j=0; j<N; j++)
    {
        if (a[j] > 0)
        {
            cout<<a[j]<<" ";
        }
    }
    return 0;
}