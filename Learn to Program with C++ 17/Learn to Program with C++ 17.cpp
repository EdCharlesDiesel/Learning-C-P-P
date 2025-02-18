#include <iostream>
#include <iomanip>

void SolveLinearEquations(double matrix[3][4], int n) {
    // Gaussian Elimination
    for (int i = 0; i < n; i++) {
        // Make the diagonal element 1
        double diagElement = matrix[i][i];
        for (int j = 0; j <= n; j++) {
            matrix[i][j] /= diagElement;
        }

        // Make the other elements in the column 0
        for (int k = 0; k < n; k++) {
            if (k == i) continue;

            double factor = matrix[k][i];
            for (int j = 0; j <= n; j++) {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Output the solutions
    std::cout << "Solutions:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "x" << (i + 1) << " = " << std::fixed << std::setprecision(2) << matrix[i][n] << std::endl;
    }
}

int main() {
    // Coefficients matrix
    double matrix[3][4] = {
        { 1,  1,  2,  9 },   // Row 1: x1 + x2 + 2x3 = 9
        { 2,  4, -3,  1 },   // Row 2: 2x1 + 4x2 - 3x3 = 1
        { 3,  6, -5,  0 }    // Row 3: 3x1 + 6x2 - 5x3 = 0
    };

    int n = sizeof(matrix) / sizeof(matrix[0]); // Number of equations

    SolveLinearEquations(matrix, n);

    return 0;
}