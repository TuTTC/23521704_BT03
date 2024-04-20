#include "CHinhCau.h"


istream& operator >> (std::istream& in, CHinhCau& O) {
	cout << "Nhap tam I: " << endl;
	in >> O.I;
	cout << "Nhap ban kinh: ";
	in >> O.R;
	return in;
}

ostream& operator << (std::ostream& out, CHinhCau O) {
	cout << "Hinh cau vua nhap la: " << "\n";
	out << "Hinh cau tam I" << O.I << " ban kinh R = " << O.R << "\n";
	return out;
}