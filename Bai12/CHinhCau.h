#pragma once
#include <iostream>
#include "CDiemKhongGian.h"
using namespace std;
class CHinhCau
{
private:
	CDiemKhongGian I;
	int R;
public:
	friend std::ostream& operator << (std::ostream&, CHinhCau);
	friend std::istream& operator >> (std::istream&, CHinhCau&);
};

