#include <stdio.h>

struct Sparse {
    int row;
    int col;
    int value;
};

int main() {
    int matrix[4][4] = {
        {0, 0, 0, 5},
        {0, 0, 0, 0},
        {0, 7, 0, 0},
        {0, 0, 0, 0}
    };

    struct Sparse sparse[10];  // to store non-zero elements
    int k = 0; // index for sparse array

    // Scan the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }

    // Print Sparse Matrix Representation
    printf("Row Col Value\n");
    for (int i = 0; i < k; i++) {
        printf("%d   %d   %d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }

    return 0;
}

