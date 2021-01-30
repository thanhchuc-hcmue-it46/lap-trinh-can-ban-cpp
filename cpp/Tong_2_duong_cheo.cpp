/* Chuc lap trinh */
// Cho 1 mảng 2 chiều kích thước nxn (n<50)
// Tính tổng 2 đường chéo của mảng 2 chiều trên.
// input : 3 0 1 2 3 4 5 6 7 8
//     0   1   2
//     3   4   5           tổng là 0+4+8+2+4+6 = 24
//     6   7   8
// output : 24
        
#include <iostream>
using namespace std;

int main()
{
    int s=0,c,n;
    cin>>n;
    int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i=j)
            {
                c=a[i][j] + a[i][j];
                s=s+c;
            }
        }
    }
    cout<<s;
  
    return 0;
}
