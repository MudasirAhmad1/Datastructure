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
			if(i<=j)
			{
			matrix[i][j]=array2[i];
			printf("\t %d",matrix[i][j]);
			}
			else
			{
				matrix[i][j]=array2[j];
			printf("\t %d",matrix[i][j]);
			}
			
		}
		printf("\n");
	}
}
