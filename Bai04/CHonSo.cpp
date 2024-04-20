#include "CHonSo.h"

istream& operator>>(istream& is, CHonSo& P)
{
	cout << "Nhap phan nguyen: ";
	is >> P.Wholenumber;
	cout << "Nhap tu so: ";
	is >> P.Numerator;
	cout << "Nhap mau so: ";
	is >> P.Denominator;
	return is;
}

ostream& operator<<(ostream& out, CHonSo P)
{
	out << "Hon so vua nhap la: ";
	out << P.Wholenumber << "(" << P.Numerator << "/" << P.Denominator << ")" << "\n";
	return out;
}
