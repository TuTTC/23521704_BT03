#pragma once
#include <iostream>
using namespace std;
class CThoiGian
{
private:
	int hour;
	int minute;
	int second;
public:
public:
	friend std::ostream& operator << (std::ostream&, CThoiGian);
	friend std::istream& operator >> (std::istream&, CThoiGian&);
};

