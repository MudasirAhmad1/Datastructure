#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter the row:");
	scanf("%d",&row);
	printf("Enter the Column");
	scanf("%d",&col);
	
	int matrix[row][col];
//	printf("Enter the Data:");
	for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix[i][j] = 0;
        }
    }
	
	printf("Enter %d diagonal elements:\n", row);
    for (int i = 0; i < row; i++) {
        printf("Element [%d][%d]: ", i, i);
        scanf("%d", &matrix[i][i]);
    }
    for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("\t %d",matrix[i][j]);
		}
		printf("\n");
	}
	
}
