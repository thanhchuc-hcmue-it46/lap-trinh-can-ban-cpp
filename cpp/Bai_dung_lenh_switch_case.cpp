/* Copyright@2020 by Thanh Chuc Le */

// Input:
// Một số nguyên dương n (n<=10^4)
// Ouput: Nếu n chia hết cho 3, xuất "n chia het cho 3", ngược lại nếu n chia cho 3 dư 1 xuất "n chia 3 du 1" ngược lại nếu n chia 3 dư 2 xuất "n chia 3 du 2"
// (Lưu ý: Không xuất dấu "
// Thay n bằng giá trị input
// Ví dụ:

// Input	Output
// 9       9 chia het cho 3
// 5       5 chia 3 du 2



#include <iostream>
using namespace std;

int main()
{
    // Nhập dữ liệu
    int n;
    cin>>n;
    
    // Tính toán
    int sodu = n % 3;
    
    // Xuất kết quả
    switch (sodu)
    {
        case 0:
            cout<<n<<" chia het cho 3";
            break;
        case 1:
            cout<<n<<" chia 3 du 1";
            break;
        case 2:
            cout<<n<<" chia 3 du 2";
            break;
        
    }
    
    
    return 0;
}