#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long n,s;s=1;
    cin>>n;cout<<fixed<<setprecision(2);
    for(int i=0;i<n;i++)
    s=s+s*(2*(i+1))/(2*i+3);
    return 0;
}