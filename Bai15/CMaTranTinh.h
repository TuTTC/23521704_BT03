#pragma once
#include <iostream>
using namespace std;
#define MAX 100
class CMaTranTinh
{
private:
	int m;
	int n;
	int a[MAX][MAX];
public:
	void setm(int m);
	void setn(int n);
	void setElementMatrix(int value, int i, int j);
	int getm();
	int getn();
	int getElementMatrix(int i, int j);
	CMaTranTinh() {}
	CMaTranTinh(int m, int n, int a[][MAX]) {
		this->m = m;
		this->n = n;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				this->a[i][j] = a[i][j];
			}
		}
	}
	friend std::ostream& operator << (std::ostream&, CMaTranTinh);
	friend std::istream& operator >> (std::istream&, CMaTranTinh&);
};

