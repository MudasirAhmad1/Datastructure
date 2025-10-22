#include <stdio.h>

int main() {
    int row, col, isToeplitz = 1;

    // Step 1: Input matrix size
    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    // Step 2: Input elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Check the Toeplitz condition
    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
        	printf("%d",a[i][j]);
//            if (a[i][j] != a[i-1][j-1]) {
                //isToeplitz = 0;
                //break;
//            }
        }
//        if (!isToeplitz) break;
    }

    // Step 4: Output result
//    if (isToeplitz)
//        printf("\n? The matrix is a Toeplitz Matrix.\n");
//    else
//        printf("\n? The matrix is NOT a Toeplitz Matrix.\n");

    return 0;
}

