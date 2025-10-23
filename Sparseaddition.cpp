#include <stdio.h>
#define SIZE 3  // 3x3 matrix
int main() {
    int matrix[SIZE][SIZE] = {
        {0, 0, 3},
        {0, 0, 0},
        {1, 0, 0}
    };
    printf("Triplet Representation (non-zero values only):\n");
    printf("Row  Col  Val\n");
    
    int row[10];
    int col[10];
    int val[10];
    int k=0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] != 0) {
            	row[k]=i;
            	col[k]=j;
				val[k]=matrix[i][j];
				k++; 
                printf(" %d    %d    %d\n", i, j, matrix[i][j]);
            }
        }
    }
    for(int i=0;i<k;i++)
    {
    	printf("%d %d %d \n",row[i],col[i],val[i]);
	}
    return 0;
}

