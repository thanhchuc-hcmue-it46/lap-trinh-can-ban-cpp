/* Chuc lap trinh */
// Viết chương trình liệt kê các số nguyên dương k thỏa đồng thời các đk sau:
// 1, k là số có 5 chữ số
// 2, k là số nguyên tố
// 3, k là số đối xứng (ví dụ số đối xứng 10001, 38183,.. )

#include <iostream>

using namespace std;

bool laSoNguyenTo(int x);
bool laSoDoiXung(int y);

int main()
{
    int k;
    for (k = 10001; k<=99997; k+=2)
    {
        if (laSoNguyenTo(k))
        {
            if (laSoDoiXung(k))
            {
                cout << k << "\n";
            }
        }
    }

    return 0;
}

bool laSoNguyenTo(int x)
{
    if (x > 1)
    {
        for (int i=2; i<=x/2; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    return false;
}

bool laSoDoiXung(int y)
{
    int tam = y;
    int yNgichDao = 0;
    int r;
    while (tam != 0) {
        r = tam % 10;
        tam = tam / 10;
        yNgichDao = yNgichDao*10 + r;
    }
    
    return y == yNgichDao;
}