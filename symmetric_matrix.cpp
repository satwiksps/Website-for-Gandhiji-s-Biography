
#include <iostream>
using namespace std;

bool isSymmetric(int matrix[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i])
                return false;
        }
    }
    return true;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    cout << (isSymmetric(matrix, 3) ? "Matrix is symmetric" : "Matrix is not symmetric") << endl;
    return 0;
}
