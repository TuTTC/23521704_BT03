#include <iostream>
#include "CSoPhuc.h"
using namespace std;

istream& operator>>(istream& is, CSoPhuc& P)
{
	cout << "Nhap thuc: ";
	is >> P.thuc;
	cout << "Nhap ao: ";
	is >> P.ao;
	return is;
}

ostream& operator<<(ostream& out, const CSoPhuc& P)
{
	out << P.thuc << " + " << P.ao << "i" << "\n";
	return out;
}