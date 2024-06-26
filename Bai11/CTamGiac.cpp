#include "CTamGiac.h"
using namespace std;

istream& operator >> (istream& in, CTamGiac& x) {
	cout << "Nhap toa do 3 diem: " << "\n";
	cout << "Nhap diem A : \n";
	in >> x.A;
	cout << "Nhap diem B : \n";
	in >> x.B;
	cout << "Nhap diem C : \n";
	in >> x.C;
	return in;
}

ostream& operator << (ostream& out, CTamGiac x) {
	out << "Diem A: " << x.A << "Diem B: " << x.B << "Diem C: " << x.C;
	return out;
}

int CTamGiac::ktHopLe() {
	float AB = A.KhoangCach(B);
	float AC = A.KhoangCach(C);
	float BC = B.KhoangCach(C);
	if (AB + AC > BC && AB + BC > AC && AC + BC > AB)
		return 1;
	return 0;
}