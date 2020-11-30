/* Copyright@2020 by Thanh Chuc Le */
// Input: 2 số nguyên dương a, b.
// Output: hình chữ nhật ngôi sao rỗng giữa tương ứng độ dài 2 cạnh.

// Ví dụ:

// Input:
// 3 5

// Output:
// *****
// *   *
// *****

#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
    if (i==1 or i==a)
        {for(int j=1;j<=b;j++)
        cout<<"*";}
    else for(int k=1;k<=b;k++){
        if(k==1||k==b)
            cout<<"*";
        else cout<<" ";
    }
        
    if(i<a)
        {cout<<endl;}}
    return 0;
}