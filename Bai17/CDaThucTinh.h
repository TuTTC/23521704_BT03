#pragma once
#include <iostream>
class CDaThucTinh
{
private:
	int n;
	float a[100];
public:
	friend std::ostream& operator << (std::ostream&, CDaThucTinh);
	friend std::istream& operator >> (std::istream&, CDaThucTinh&);
};

