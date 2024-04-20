#include "CDaThucDong.h"

istream& operator>>(istream& is, CDaThucDong& P)
{
    // TODO: insert return statement here
    cout << "Nhap bac da thuc: ";
    is >> P.n;
    P.a = new float[P.n + 2];
    cout << "Nhap cac he so cua da thuc: \n";
    for (int i = P.n-1; i >= 0; i--) {
        cout << "a[" << i << "] = ";
        is >> P.a[i];
    }
    return is;
}

ostream& operator<<(ostream& out, CDaThucDong P)
{
    for (int i = P.n-1; i >= 0; i--) {
            cout << P.a[i] << "x^" << i;
        if (i != 0) {
            cout << " + ";
        }

    }
    return out;
}
