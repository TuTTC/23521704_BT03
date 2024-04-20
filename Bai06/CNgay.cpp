#include "CNgay.h"

std::istream& operator >> (std::istream& in, CNgay& x) {
	std::cout << "Nhap ngay: ";
	in >> x.ng;
	std::cout << "Nhap thang: ";
	in >> x.th;
	std::cout << "Nhap nam: ";
	in >> x.nm;
	return in;
}
std::ostream& operator << (std::ostream& out, CNgay x) {
	out << x.ng << "/" << x.th << "/" << x.nm << "\n";
	return out;
}
