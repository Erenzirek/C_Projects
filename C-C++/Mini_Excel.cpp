#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Sabit boyutta tablo boyutlarý
const int ROWS = 5;
const int COLS = 5;

// Tabloyu temsil eden sýnýf
class MiniExcel {
private:
    int data[ROWS][COLS];

public:
    void setData(int row, int col, int value) {
        if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
            data[row][col] = value;
        } else {
            std::cout << "Gecersiz hucre indeksi!" << std::endl;
        }
    }

    int getData(int row, int col) const {
        if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
            return data[row][col];
        } else {
            std::cout << "Gecersiz hucre indeksi!" << std::endl;
            return 0;
        }
    }

    void printTable() const {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                std::cout << std::setw(5) << getData(i, j) << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    MiniExcel excel;

    excel.setData(0, 0, 10);
    excel.setData(1, 2, 7);
    excel.setData(3, 4, 15);

    excel.printTable();

    return 0;
}
