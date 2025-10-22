#include<stdio.h>
int main()
{
	int n=3;
	int matrix[n][n];
	int array[]={1,2,3,4,5,6};
	int array2[]={2,3,4};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] = matrix[i - 1][j - 1];

			
		}
		printf("\n");
	}
}
