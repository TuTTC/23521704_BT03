#include "CDuongTron.h"

istream& operator>>(istream& is, CDuongTron& O)
{
	cout << "Nhap tam I: " << endl;
	is >> O.I;
	cout << "Nhap ban kinh: ";
	is >> O.R;
	return is;
}

ostream& operator<<(ostream& out, CDuongTron O) {
	cout << "Duong tron vua nhap la: " << "\n";
	out << "Duong tron tam I" << O.I << " ban kinh R = " << O.R << "\n";
	return out;
}
