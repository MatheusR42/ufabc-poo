#include <iostream>
#include <iomanip>

void printMatrix(int** m, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << m[i][j];
            if (j != cols - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows;
    int cols;

    std::cin >> rows;
    std::cin >> cols;

    // Dynamically allocate matrix
    int** m = new int*[rows];

    for (int i = 0; i < rows; ++i) {
        m[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            int v = 0;
            std::cin >> v;
            m[i][j] = v * 10; 
        }
    }

    printMatrix(m, rows, cols);

    return 0;
}
