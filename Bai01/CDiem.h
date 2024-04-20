#pragma once
#include <iostream>
using namespace std;
class CDiem
{
private:
	int x; 
	int y;
public:
	friend istream& operator>>(istream& is, CDiem& P);
	friend ostream& operator<<(ostream& out, CDiem P);
};

