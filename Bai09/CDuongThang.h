#pragma once
#include <iostream>
using namespace std;

class CDuongThang
{
private:
	int a;
	int b;
	int c;
public:
	friend std::ostream& operator << (std::ostream&, CDuongThang);
	friend std::istream& operator >> (std::istream&, CDuongThang&);
};

