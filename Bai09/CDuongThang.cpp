#include "CDuongThang.h"
using namespace std;

istream& operator >> (istream& in, CDuongThang& P) {
	cout << "Nhap he so thu nhat: ";
	in >> P.a;
	cout << "Nhap he so thu hai: ";
	in >> P.b;
	cout << "Nhap he so thu ba: ";
	in >> P.c;
	return in;
}

ostream& operator <<(ostream& out, CDuongThang P) {
	cout << "Duong thang vua nhap la: ";
	out << P.a << "x + " << P.b << "y + " << P.c << "\n";
	return out;
}
