
#include <iostream>
using namespace std;

bool isMagicSquare(int matrix[3][3], int n) {
    int sumDiagonal1 = 0, sumDiagonal2 = 0;

    for (int i = 0; i < n; i++) {
        sumDiagonal1 += matrix[i][i];
        sumDiagonal2 += matrix[i][n - 1 - i];
    }

    if (sumDiagonal1 != sumDiagonal2) return false;

    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != sumDiagonal1 || colSum != sumDiagonal1) return false;
    }
    return true;
}

int main() {
    int matrix[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };
    cout << (isMagicSquare(matrix, 3) ? "Matrix is a magic square" : "Matrix is not a magic square") << endl;
    return 0;
}
