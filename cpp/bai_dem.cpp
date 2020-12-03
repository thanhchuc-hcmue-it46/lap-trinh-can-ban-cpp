/* Copyright@2020 by Thanh Chuc Le */

/*Nhập 1 dãy chữ cái, dếm có bao nhiêu chữ A,có bao nhiêu chữ a*/


#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b,s,dem0,dem1,dem2,dem3,dem4,dem5,dem6,dem7,dem8,dem9;s=0;
    dem0=0;dem1=0;dem2=0;dem3=0;dem4=0;dem5=0;dem6=0;dem7=0;dem8=0;dem9=0;
    cin>>a;
    while(a>0){
        int z=a%10;
        switch (z){
        case 0:dem0++;break;
        case 1:dem1++;break;
        case 2:dem2++;break;
        case 3:dem3++;break;
        case 4:dem4++;break;
        case 5:dem5++;break;
        case 6:dem6++;break;
        case 7:dem7++;break;
        case 8:dem8++;break;
        case 9:dem9++;break;
        }
        a/=10;
    }
        if (b%1==0) s=s+dem1++;
        if (b%2==0) s=s+2*dem2++;
        if (b%3==0) s=s+3*dem3++;
        if (b%4==0) s=s+4*dem4++;
        if (b%5==0) s=s+5*dem5++;
        if (b%6==0) s=s+6*dem6++;
        if (b%7==0) s=s+7*dem7++;
        if (b%8==0) s=s+8*dem8++;
        if (b%9==0) s=s+9*dem9++;
    cout<<s;
    return 0;
}