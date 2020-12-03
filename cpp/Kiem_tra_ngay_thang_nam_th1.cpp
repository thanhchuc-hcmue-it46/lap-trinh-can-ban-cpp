/* Copyright@2020 by Thanh Chuc Le */
// Viết chương trình nhập vào 3 số nguyên là ngày tháng năm. Hãy xác định ngày tháng năm có hợp lệ hay không?
// Lưu ý:
// - Ngày phải tương ứng với tháng
// - Tháng phải từ 1 đến 12
// - Năm phải >= 1900
// - Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho 100
// Input: 3 số nguyên dương
// Output: YES (hợp lệ), NO (không hợp lệ)
// Vd:
// Input: 28 9 2017
// Output: YES

#include <iostream>
using namespace std;

int main ()
{
    int day, month, year;
    cin>>day>>month>>year;
    
    bool isCorrectYear = year >= 1900;
    bool isCorrectMonth = month >= 1 && month <= 12;
    bool isLeapYear = year >=1900 && (year%400==0 || (year%4==0 && year%100!=0));
    bool isCorrectDay = false;
   
    //  với những tháng có 31 ngày
    if ((month == 1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && (day >= 1 && day <=31))
    {
        isCorrectDay = true;
    }
    // với những tháng có 30 ngày
    if ((month==4 || month==6 || month==9 || month==11) && (day >= 1 && day <=30))
    {
        isCorrectDay = true; 
    }
    // với tháng 2
    if (month==2) 
    {
        if (isLeapYear)
        {
           if (day >=1 && day <=29)
           {
               isCorrectDay = true;
           }
        }
        else
        {
            if (day >= 1 && day <= 28)
            {
                isCorrectDay = true;
            }
        }
    }

    if (isCorrectYear && isCorrectMonth && isCorrectDay)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   
    return 0;
}