#include "CMaTranDong.h"


std::istream& operator>>(std::istream& in, CMaTranDong& P)
{
    cout << "Nhap so hang: ";
    in >> P.rows;
    cout << "Nhap so cot: ";
    in >> P.cols;
    if (P.data != nullptr)
    {
        for (int i = 0; i < P.rows; ++i)
        {
            delete[] P.data[i];
        }
        delete[] P.data;
    }

    // Cấp phát lại bộ nhớ cho ma trận mới
    P.data = new int* [P.rows];
    for (int i = 0; i < P.rows; ++i)
    {
        P.data[i] = new int[P.cols];
    }
    for (int i = 0; i < P.rows; i++) {
        for (int j = 0; j < P.cols; j++) {
            cout << "Nhap phan tu a[" << i << "][" << j << "]: ";
            in >> P.data[i][j];
        }
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, CMaTranDong P)
{
    for (int i = 0; i < P.rows; ++i) {
        for (int j = 0; j < P.cols; ++j) {
            out << P.data[i][j] << " ";
        }
        out << "\n";
    }
    return out;
}