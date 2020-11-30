/* Copyright@2020 by Thanh Chuc Le */
// Viết chương trình nhập vào số nguyên dương n, in ra giá trị của tổng sau





// Ví dụ:  

// input 3

// output 3.06

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
long double n,s,a;a=1;s=1;
cin>>n;cout<<fixed<<setprecision(2);
for(int i=0;i<=n;i++)
{a=a*(2*(i+1))/(2*i+3);
s=s+a;}
cout<<s;
return 0;
}