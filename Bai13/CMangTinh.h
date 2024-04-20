#pragma once
#include <iostream>
using namespace std;

template<typename T, int MAX_SIZE>
class CMangTinh
{
private:
	int n;
	T a[MAX_SIZE];
public:
	template<typename U, int SIZE>
	friend std::istream& operator >> (std::istream&, CMangTinh<U, SIZE>&);
	template<typename U, int SIZE>
	friend std::ostream& operator << (std::ostream&, const CMangTinh<U, SIZE>&);
	
};

