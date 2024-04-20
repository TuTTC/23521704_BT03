#pragma once
#include <iostream>
using namespace std;
class CMaTranDong
{
private:
	int rows;
	int cols;
	int** data;
public:
    CMaTranDong() : rows(0), cols(0), data(nullptr) {}

    CMaTranDong(int r, int c) : rows(r), cols(c), data(nullptr)
    {
        // Khởi tạo ma trận rỗng nếu r hoặc c là âm
        if (rows <= 0 || cols <= 0)
        {
            rows = 0;
            cols = 0;
            data = nullptr;
        }
        else
        {
            // Cấp phát bộ nhớ cho mảng con trỏ data
            data = new int* [rows];
            for (int i = 0; i < rows; ++i)
            {
                data[i] = new int[cols];
            }
        }
    }
	~CMaTranDong() {
		for (int i = 0; i < rows; ++i) {
			delete[] data[i];
		}
		delete[] data;
	}
	int getRows() const {
		return rows;
	}

	int getCols() const {
		return cols;
	}

	friend std::ostream& operator << (std::ostream&, CMaTranDong);
	friend std::istream& operator >> (std::istream&, CMaTranDong&);
};

