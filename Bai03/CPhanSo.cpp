#include <iostream>
#include "CPhanSo.h"
using namespace std;

istream& operator>>(istream& is, CPhanSo& P)
{
	cout << "Nhap tu: ";
	is >> P.tu;
	cout << "\rNhap mau: ";
	is >> P.mau;
	return is;
}

ostream& operator<<(ostream& out, const CPhanSo& P)
{
	out << P.tu << "/" << P.mau << "\n";
	return out;
}