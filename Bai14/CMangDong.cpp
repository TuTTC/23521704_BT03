#include "CMangDong.h"

template<typename U>
std::istream& operator>>(std::istream& in, CMangDong<U>& P)
{
    cout << "Nhap so luong phan tu: ";
    in >> P.n;
    P.a = new U[P.n];
    for (int i = 0; i < P.n; i++) {
        cout << "Nhap phan tu a[" << i << "]: ";
        in >> P.a[i];
    }
    return in;
}

template<typename U>
std::ostream& operator<<(std::ostream& out, CMangDong<U> P)
{
    for (int i = 0; i < P.n; i++) {
        out << P.a[i] << " ";
    }
    delete[]P.a;
    return out;
}