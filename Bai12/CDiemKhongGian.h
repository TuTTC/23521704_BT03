#pragma once
#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	int x;
	int y;
	int z;
public:
	friend istream& operator>>(istream& is, CDiemKhongGian& P);
	friend ostream& operator<<(ostream& out, CDiemKhongGian P);
};