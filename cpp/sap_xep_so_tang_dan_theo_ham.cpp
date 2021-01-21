/* Chuc lap trinh */
// sắp xếp tăng dần trong hàm

#include <iostream>
using namespace std;

void soTangDan(int a[100], int n);
int main()
{
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++ ) 
   {
      cin>>a[i]; 
   }
   
    soTangDan(a, n);
    return 0;
}

void soTangDan(int a[100], int n)
{
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
  
    for(int i = 0; i<n-1; i++)
    {
        // dam bao sau a[i] ko co phan tu nao lon hon 
        for(int j=i+1; j<n; j++)
        {
            if (a[i] > a[j]) {
                int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
        
        // Tinh trang mang tai lan lap thu i
        cout<<"i = "<<i<<": ";
        for (int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}