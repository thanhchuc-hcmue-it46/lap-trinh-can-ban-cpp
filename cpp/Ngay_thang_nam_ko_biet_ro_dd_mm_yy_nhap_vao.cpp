/* Chuc lap trinh */
// Nhập ngày/tháng/năm , số ngày tính từ ngày tháng năm đã nhập là ngày tháng năm nào
// input   30 12 2015
//         16
// output  ngay thang nam dung
//         sau 16 ngay thi se la
//         15/1/2016       

#include <iostream>
using namespace std;

bool ngayDung (int dd, int mm);
bool laNamNhuan(int x);

int main()
{
    int ngay, thang, nam;
    cin>>ngay>>thang>>nam;
    int n;
    cin>>n;
    bool thangDung = thang >= 1 && thang <= 12;
    bool namDung = nam > 0;
    cout<<ngay<<"/"<<thang<<"/"<<nam<<"\n";
    
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7|| thang == 8 || thang == 10 || thang == 12)
    {
        ngayDung;   
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        ngayDung;
    }
    else if (thang == 2)
    {
        if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
        {
            ngay >= 1 && ngay <= 29;
        }
        else if ((nam % 400 != 0) || (nam%4 != 0 && nam%100 != 0)|| (nam%4==0 && nam%100==0)||(nam%4!=0 && nam%100==0))
        {
            ngay >=1 && ngay <= 28;
        }
    }
    if (ngayDung && thangDung && namDung)
    {
        cout<<"ngay thang nam dung ";
    }
    else {
        cout<<"ngay thang nam sai";
        return 0;
    }
    cout << "\n";
    cout << "sau "<<n<<" ngay thi se la \n";
    
    
    int nn[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while (n > 0)
    {
        if (laNamNhuan(nam))
        {
            cout<<nam<<" nam nhuan | n = " << n <<"\n";
            nn[2] = 29;
        } else {
            cout<<nam<<" nam khong nhuan | n = " << n <<"\n";
            nn[2] = 28;
        }
        
        if (ngay + n <= nn[thang])
        {
            ngay = ngay + n;
            cout<<ngay<<"/"<<thang<<"/"<<nam;
            return 0;
        }
        else
        {
            // Sau n ngay phai sang thang tiep theo
            if (thang < 12) {
                cout<<"LOG: n = "<<n << " | " <<ngay <<"/"<<thang<<"/"<<nam <<endl;
                // van con trong nam hien tai
                for (int t = thang + 1; t <= 12; t++)
                {
                    if (t - 1 == 1)
                    {
                        n = n - (nn[t - 1] - ngay);
                    } else {
                        n = n - (nn[t - 1]);
                    }
                        
                    if (n <= nn[t]) {
                        cout<<n<<"/"<<t<<"/"<<nam;
                        return 0;
                    }
                }

                 // Chua chem thang 12, gio chem roi qua nam moi
                if (n > 0) {
                    n = n - nn[12];
                    n--;
                    ngay = 1;
                    thang = 1;
                     nam++;
                }
                    
                    
            } else {
                // Thang phai qua nam sau (1/1/nam++)
                n = n - (nn[thang] - ngay) - 1;
                ngay = 1;
                thang = 1;
                nam = nam + 1;
            }               
                
        }
    }
    
    
    cout<<ngay<<"/"<<thang<<"/"<<nam;
    return 0;
}

bool ngayDung (int dd, int mm)
{
    if (dd >= 1 && dd <=31)
    {
       return mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12;
    }
    else if (dd >= 1 && dd <= 30)
    {
        return mm == 4 || mm == 6 || mm == 9 || mm == 11;
    }
    return ngayDung;
}

bool laNamNhuan(int x)
{
    if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}