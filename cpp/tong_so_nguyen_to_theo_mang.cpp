/* Chuc lap trinh */
// Input:
// - Dòng 1: Nhập vào N là số lượng phần tử của mảng
// - Dòng 2: N số nguyên (mỗi số cách 1 khoảng trắng)

// Ouput:
// Yêu cầu xuất tổng các số nguyên tố ra màn hình

// ví dụ:
// input:
// 3
// 1 2 3

// output
// 5


#include <iostream>
using namespace std;

bool laSoNguyenTo(int x);

int main ()
{
    int N;
    cin>>N;
    int a[100];
    for (int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    
    int tongSoNguyenTo = 0;
    for(int i=0; i<N; i++)
    {
        if (laSoNguyenTo(a[i]))
        {
            tongSoNguyenTo = tongSoNguyenTo + a[i];
        }
    }
    cout<<tongSoNguyenTo;
    
    return 0;
}
bool laSoNguyenTo(int x)
{
    if (x>1)
    {
        for (int j=2; j<=x/2; j++)
        {
            if (x % j == 0) 
            return false;
        }
        return true;
    }
    return false;
}
