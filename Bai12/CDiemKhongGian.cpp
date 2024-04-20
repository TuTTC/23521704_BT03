#include "CDiemKhongGian.h"

istream& operator>>(istream& is, CDiemKhongGian& P)
{
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    cout << "Nhap z: ";
    is >> P.z;
    return is;
}

ostream& operator<<(ostream& out, CDiemKhongGian P)
{
    out << "(" << P.x << ", " << P.y << ", " << P.z << ")";
    return out;
}
