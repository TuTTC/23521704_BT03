#pragma once
#include <iostream>
class CNgay
{
private:
	int ng, th, nm;
public:
	friend std::ostream& operator << (std::ostream&, CNgay);
	friend std::istream& operator >> (std::istream&, CNgay&);
};

