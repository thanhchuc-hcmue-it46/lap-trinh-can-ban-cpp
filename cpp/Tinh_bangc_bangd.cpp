/* Chuc lap trinh */
// Cho bảng số a,b có cùng n dòng n cột; các phần tử của a,b là các số nguyên được nhập từ bàn phím
// Viết chương trình :
// a, tạo bảng số c biết cij  = aij + bij
// b, Tạo bảng số d biết dij = aij * max{bi} trong đó max{bi} là max của các phần tử trên dòng thứ i của b
// c, xuất các bảng kết quả c,d lên màn hình

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int b[n][n];
    int c[n][n];
    int d[n][n];
    
    // Nhap bang a
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    
    // Nhap bang b
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>b[i][j];
        }
    }
    
    for ( int i=0; i<n; i++)
    {
        for ( int j=0; j<n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // kiem tra max dong i bang b
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            // tim max dong b[i]
            int maxBi = b[i][0];
            for (int k=0; k<n; k++)
            {
                if (b[i][k] > maxBi)
                {
                    maxBi = b[i][k];
                }
            }
            
            d[i][j] = a[i][j] * maxBi;
        }
    }
    // in bang c
    cout<<"\nbang c\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout <<c[i][j]<< " ";
        }
        cout << "\n" ;
    }
    // in bang d
    cout << "\nbang d\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout <<d[i][j]<< " ";
        }
        cout << "\n" ;
    }
    
    return 0;
}
