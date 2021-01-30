/* Chuc lap trinh */
// Nhập 3 số tự nhiên a, b, c. Kiểm tra xem 3 số này có độ dài của ba cạnh trong 
// 1 tam giác không?. Nếu có thì xuất YES ngược lại xuất NO. Đồng thời nếu tạo thành 
// 1 tam giác thì kiểm tra thêm đó là loại tam giác nào?
// (THUONG, VUONG, DEU,CAN)
// INPUT   3 4 5 
// OUTPUT  YES
//         VUONG

// TNPUT   1 2 3 
// OUTPUT  NO   

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if( a<b+c && b<a+c && c<a+b )
    {
        cout<<"YES"<<"\n";
        
        if(a==b || a==c || b==c)
        {
            cout<<"CAN";
        }
        else if(a==b && b==c)
        {
            cout<<"DEU";
        }
        else if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        {
            cout<<"VUONG";
        }
        else
        {
            cout<<"THUONG";
        }
    }   
    else
        cout<<"NO";
    return 0;
}
