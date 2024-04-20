#pragma once
#include <iostream>
using namespace std;
class CDaThucDong
{
private:
	int n;
	float* a;
public:
	friend istream& operator>>(istream& is, CDaThucDong& P);
	friend ostream& operator<<(ostream& out, CDaThucDong P);
};

