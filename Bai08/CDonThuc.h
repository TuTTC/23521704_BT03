#pragma once
#include <iostream>
#include <vector>
using namespace std;
class CDonThuc
{
private:
	int a;
	int n;
public:
	friend std::ostream& operator << (std::ostream&, CDonThuc);
	friend std::istream& operator >> (std::istream&, CDonThuc&);
};

