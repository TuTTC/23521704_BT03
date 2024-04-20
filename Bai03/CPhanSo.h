#pragma once
#include <iostream>
using namespace std;
class CPhanSo
{
private:
	int tu;
	int mau;
public:
	friend istream& operator>>(istream& is, CPhanSo& P);
	friend ostream& operator<<(ostream& out, CPhanSo P);
};

