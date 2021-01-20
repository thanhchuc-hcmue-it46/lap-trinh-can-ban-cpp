#include <iostream>
using namespace std;

typedef struct
{
    int ngay;
    int thang;
    int nam;
} NgayThangNam;

bool laSoNguyenTo(int y);
bool laSoNguyenToCungNhau(int j,int k);

int main()
{
    int n;
    cin>>n;
    
    NgayThangNam a[n]; 
    
    for (int i=0; i<n; i++)
    {
        cin>>a[i].ngay>>a[i].thang>>a[i].nam;
    }
    
    // dong 1 in nguoc
    for (int i=n-1; i>=0; i--)
    {
        cout<<a[i].ngay<<"/"<<a[i].thang<<"/"<<a[i].nam<<" ";
    }
    cout<<"\n";
    
    //dong 2 in NgayThangNam co nam lon nhat,cos nam nho nhat
    NgayThangNam namMax = a[0];
    NgayThangNam namMin = a[0];
    for (int i=0; i<n; i++)
    {
        if (a[i].nam > namMax.nam) {
            namMax = a[i];
        }
        if (a[i].nam < namMin.nam){
            namMin = a[i];
        }
    }
    cout<<namMin.ngay<<"/"<<namMin.thang<<"/"<<namMin.nam<<" ";
    cout<<namMax.ngay<<"/"<<namMax.thang<<"/"<<namMax.nam<<"\n";
    
    //dong 3 in số lượng NgayThangNam có nam là so nguyen to
    int x=0;
    for (int i=0; i<n; i++)
    {
        if (laSoNguyenTo(a[i].nam) == true) 
        {
            x++;
        }
        
    }
    cout<<x<<"\n";
    
    // dong 4 in so luong NgayThangNam có ngay và thang laSoNguyenToCungNhau
    int s=0;
    for (int i=0; i<n; i++)
    {
        if (laSoNguyenToCungNhau(a[i].ngay, a[i].thang) == true)
        {
            s++;
        }
    }
    cout <<s;

    return 0;
}

bool laSoNguyenTo(int y)
{
    if (y > 1)
    {
        for (int i=2; i <= y/2; i++)
        {
            if (y % i == 0 )
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

bool laSoNguyenToCungNhau (int j, int k)
{
    int ucln = 1;
    if(j==k)
    {
        ucln = k;
    }
    else if (j<=0 || k<=0)
    {
        ucln = 0;
    }
    else 
    {
        int jTmp = j;
        int kTmp = k;
        while (jTmp != kTmp)
        {
            if (jTmp > kTmp)
            {
                jTmp = jTmp - kTmp;
            }
            else if (kTmp > jTmp)
            {
                kTmp = kTmp - jTmp;
            }
        }
        ucln = jTmp;
    }
    
    return ucln == 1;
    
}
