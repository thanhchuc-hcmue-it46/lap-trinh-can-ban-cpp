/* Chuc lap trinh */
// (+)n là số tiền thu vào; (-)n là số thiền xuất ra
// input : - Nhập vào 1 số nguyên dương n (0<n<=100)
//         - n dòng tiếp theo , mỗi dòng là 1 số có kèm theo dấu + or -, thể hiện tiền được thu vào hãy chỉ ra trong tháng
// output : - Xuất ra số tiền đã thu
//          - xuất ra số tiền đã chi
//          - xuất số tiền còn lại 
//          - tính xem "co lai"(có lãi) hay "thieu no"(thiếu nợ)

// input 5 +100 +10 -100 -50 +100
// output  +100 +10 +100
//         -100 -50
//         +60
//         co lai

        
#include <iostream>
using namespace std;

int main()
{
    int n, c=0, d=0, s=0;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (a[i] > 0)
        {
            c = c + a[i];
            cout<<"+"<<a[i]<<" ";
        }
    }
    cout << "\n";
    for (int i=0; i<n; i++)
    {
        if (a[i] < 0)
        {
            d = d + a[i];
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
    s = c + d;
    if (s<0)
    {
        cout<<s<<"\n";
        cout<<"thieu no";
    }
    else if(s>0)
    {
        cout<<"+"<<s<<"\n";
        cout<<"co lai";
    }
    return 0;
}
