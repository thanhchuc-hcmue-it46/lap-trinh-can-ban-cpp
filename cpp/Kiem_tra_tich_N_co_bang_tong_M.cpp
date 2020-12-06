/* Copyright@2020 by Thanh Chuc Le */
// Viết chương trình nhập vào 2 số nguyên dương N,M;  trong đó N có số chữ số lớn hơn một. 
// Yêu cầu kiểm tra tích các chữ số của N có bằng tổng các ước của M hay không? Nếu có xuất YES ngược lại xuất NO

// Dữ liệu nhập:
// - Là hai số nguyên N, M cách nhau một khoảng trắng (1 ≤ N, M ≤ 105)
// Dữ liệu xuất:
// - In ra YES nếu N, M là thỏa điều kiện trên. In ra NO nếu không phải.

// Ví dụ
// Input     Output 
//  23         NO
//  6
 
#include <iostream>
using namespace std;

int main ()
{
    int N, M;
    cin>>N>>M;
    
    int tichChuSoN = 1;
    while (N%10 > 0)
    {
        tichChuSoN = tichChuSoN * (N%10);
        N = N/10;
    }
    
    int tongUocM = 1 + M;
    for (int i=2; i<=(M/2); i++)
    {
        if (M % i == 0)
        {
            tongUocM = tongUocM + i;
        }
    }
    
    if(tichChuSoN == tongUocM)
    {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}