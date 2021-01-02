/* Chuc lap trinh */
// Input:
// - Dòng 1: Nhập vào N là số lượng phần tử của mảng
// - Dòng 2: N số nguyên (mỗi số cách 1 khoảng trắng)

// Ouput:
// - Dòng 1: xuất các số chính phương của dãy
// - Dòng 2: xuất các số nguyên tố của dãy


#include <iostream>
#include <math.h>
using namespace std;

bool laSoChinhPhuong(int x);
bool laSoNguyenTo(int x);

int main ()
{
    int N;
    cin>>N;
    int a[100];
    //nhap mang a có N phần tử
    for (int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    
    //kiểm tra số chính phương và xuất số chính phương
    for (int i=0; i<N; i++ )
    {
        if (laSoChinhPhuong(a[i]))
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
    
    //kiểm tra và xuất số nguyên tố
    for (int j=0; j<N; j++)
    {
        if (laSoNguyenTo(a[j]))
        {
            cout<<a[j]<<" ";
        }
    }
    return 0;
}

bool laSoChinhPhuong(int x)
{
    int H = sqrt(x);
    if (H*H == x)
    {
        return true;    
    }
     
    return false;
}


bool laSoNguyenTo(int x)
{
    if (x>1)
    {
        for (int k=2; k <= x/2; k++ )
        {
          if (x % k == 0)
          return false;
        }
        
        return true;
    }
    
    return false;
}


