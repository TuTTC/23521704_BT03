#include "CDiem.h"
using namespace std;

istream& operator>>(istream& is, CDiem& P)
{
	cout << "Nhap x: ";
	is >> P.x;
	cout << "Nhap y: ";
	is >> P.y;
	return is;
}

ostream& operator << (ostream& out, CDiem C) {
	out << "(" << C.x << ", " << C.y << ")";
	return out;
}