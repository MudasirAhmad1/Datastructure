#include<stdio.h>
int main()
{
	int n=3;
	int matrix[n][n]={{1,2,3},{4,5,6},{7,8,9}};
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			printf("Enter the array:\n");
//			scanf("%d",&matrix[i][j]);
//		}
//	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
			printf("\t %d",matrix[j][i]);	
			}
			else 
			{
				matrix[i][j]=0;
				printf("\t %d",matrix[i][j]);
			}
		}
		printf("\n");
	}
	
	
}
