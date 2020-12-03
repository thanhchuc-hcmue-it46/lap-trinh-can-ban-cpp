/* Copyright@2020 by Thanh Chuc Le */
// Nhap vào 2 sô nguyên a,b. Xuất sô lớn nhât

// ví dụ:
// input 
// 2 3

// output
// 3

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int _max = a;
    if (_max < b)
    {  
        _max = b;
    }
    
    cout<<_max;
   
    return 0;
}