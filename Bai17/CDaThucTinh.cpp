#include "CDaThucTinh.h"
using namespace std;
istream& operator>>(istream& is, CDaThucTinh& P)
{
    // TODO: insert return statement here
    cout << "Nhap bac da thuc: ";
    is >> P.n;
    cout << "Nhap cac he so cua da thuc: \n";
    for (int i = P.n - 1; i >= 0; i--) {
        cout << "a[" << i << "] = ";
        is >> P.a[i];
    }
    return is;
}

ostream& operator<<(ostream& out, CDaThucTinh P)
{
    int check = 0;
    for (int i = P.n - 1; i >= 0; i--) {
    }

    return out;
}

