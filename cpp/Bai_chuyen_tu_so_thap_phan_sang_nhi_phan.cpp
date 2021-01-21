#include <iostream>
using namespace std;

string doiThapPhanSangNhiPhan(int n) {
    if (n==0)
    {
        return "0";
    }

    string kq = "";
    while (n > 0)
    {
       kq = to_string(n%2) + kq;
       n = n / 2;
    }

    return kq;
}


int main ()
{
    int n;
    cin>>n;

    cout<<doiThapPhanSangNhiPhan(n);


    return 0;
}
