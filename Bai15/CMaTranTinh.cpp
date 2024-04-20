#include "CMaTranTinh.h"
#include <iomanip>

void CMaTranTinh::setm(int m) {
	this->m = m;
}
void CMaTranTinh::setn(int n) {
	this->n = n;
}
void CMaTranTinh::setElementMatrix(int value, int i, int j) {
	this->a[i][j] = value;
}
int CMaTranTinh::getm() {
	return this->m;
}
int CMaTranTinh::getn() {
	return this->n;
}
int CMaTranTinh::getElementMatrix(int i, int j) {
	return this->a[i][j];
}

std::istream& operator>>(std::istream& in, CMaTranTinh& P)
{
	cout << "Nhap so hang: ";
	in >> P.m;
	cout << "Nhap so cot: ";
	in >> P.n;
	for (int i = 0; i < P.m; i++) {
		for (int j = 0; j < P.n; j++) {
			cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
			in >> P.a[i][j];
		}
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, CMaTranTinh P)
{
	out << "Ma tran vua nhap: \n";
	for (int i = 0; i < P.m; i++) {
		for (int j = 0; j < P.n; j++) {
			out << P.a[i][j] << " ";
		}
		cout << endl;
	}
	return out;
}
