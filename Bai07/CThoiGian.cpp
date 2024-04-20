#include "CThoiGian.h"
using namespace std;

istream& operator >> (istream& in, CThoiGian& P) {
	cout << "Nhap gio: ";
	in >> P.hour;
	cout << "Nhap phut: ";
	in >> P.minute;
	cout << "Nhap giay: ";
	in >> P.second;
	return in;
}

ostream& operator << (ostream& out, CThoiGian P) {
	cout << "Thoi gian da nhap: ";
	out << P.hour << ":" << P.minute << ":" << P.second << "\n";
	return out;
}
