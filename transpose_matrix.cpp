
#include <iostream>
using namespace std;

void transposeMatrix(int matrix[3][3], int transposed[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transposed[3][3];

    transposeMatrix(matrix, transposed, 3);

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
