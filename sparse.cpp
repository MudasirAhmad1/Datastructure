#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];
    printf("Enter elements:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSparse Matrix (row, col, value):\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            if(matrix[i][j] != 0) {
                printf("%d\t%d\t%d\n", i, j, matrix[i][j]);
            }
        }
    }

    return 0;
}

