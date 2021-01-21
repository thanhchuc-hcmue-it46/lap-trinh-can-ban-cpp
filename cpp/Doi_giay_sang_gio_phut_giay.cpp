/* Chuc lap trinh */
// Nhập nào n giây đổi sang dạng giờ-phút-giây
// input 3700
// output 1h 1m 40s
#include <iostream>
using namespace std;

int main()
{
    int n, giay, phut, gio;
    cin>>n;
    if (n >= 0 && n >= 3600)
    {
        gio = n/3600;
        n = n - gio * 3600;
        phut = n / 60;
        n = n - phut * 60;
        giay = n;
    }
    cout<<gio<<"h"<<" "<<phut<<"m"<<" "<<giay<<"s";
    return 0;
}
