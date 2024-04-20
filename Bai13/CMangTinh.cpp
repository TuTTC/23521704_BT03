#include "CMangTinh.h"

template<typename T, int MAX_SIZE>
std::istream& operator>>(std::istream& in, CMangTinh<T,MAX_SIZE>& P)
{
	cout << "Nhap so phan tu n: ";
	in >> P.n;
	for (int i = 0 ; i < P.n; i++) {
		cout << "Nhap phan tu thu a[" << i << "]: ";
		in >> P.a[i];
	}
	return in;
}

template<typename T, int MAX_SIZE>
std::ostream& operator<<(std::ostream& out, const CMangTinh<T,MAX_SIZE>& P)
{
	out << "Mang da nhap co " << P.n << " phan tu: ";
	for (int i = 0; i < P.n; i++) {
		out << P.a[i] << " ";
	}
	return out;
}

