/* Chuc lap trinh */
// Nhập n có 4 chữ số
// input 9865
// output 5689
// dùng hàm 

#include <iostream>
#include <math.h>
using namespace std;

int soDaoNguoc(int);
int main ()
{
    int n;
    cin>>n;
    cout<<soDaoNguoc(n);
    return 0;
}

int soDaoNguoc(int n)
{
   int a,b,c,d;
   a = n / 1000;    n = n%1000;
   b = n / 100;     n = n%100;
   c = n / 10;      n = n%10;
   d = n;
   
  return d * 1000 + c * 100 + b * 10 + a;
   
}