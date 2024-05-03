#include <iostream>

int main() {
    int rows, cols;

    // Get matrix dimensions from user
    std::cout << "Enter the number of rows and columns of the matrix (separated by space): ";
    std::cin >> rows >> cols;

    // Initialize matrix
    int matrix[rows][cols];

    // Get matrix elements from user
    std::cout << "Enter the elements of the matrix row-wise:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Calculate transpose of matrix
    int transpose[cols][rows];
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print transpose of matrix
    std::cout << "Transpose of the matrix is:" << std::endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}