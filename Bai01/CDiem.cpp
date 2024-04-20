#include "CDiem.h"
#include <iostream>
using namespace std;
istream& operator>>(istream& is, CDiem& P)
{
    // TODO: insert return statement here
    cout << "Nhap x: ";
    is >> P.x;
    cout << "Nhap y: ";
    is >> P.y;
    return is;
}

ostream& operator<<(ostream& out, CDiem P)
{
    cout << "\nDiem vua nhap la: \n";
    out << "(" << P.x << ", " << P.y << ")\n";
    return out;
}
