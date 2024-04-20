#pragma once
#include <iostream>
using namespace std;

template<typename T>
class CMangDong
{
private:
    int n;
    T* a;

public:
    /*CMangDong() : n(0), a(nullptr) {}

    CMangDong(int size) : n(size), a(new T[size]) {}

    ~CMangDong() {
        delete[] a;
    }*/

    template<typename U>
    friend std::istream& operator>>(std::istream& in, CMangDong<U>& P);

    template<typename U>
    friend std::ostream& operator<<(std::ostream& out, CMangDong<U> P);
};