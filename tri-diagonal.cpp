#include<stdio.h>
int main()
{
	int n=3;
	int matrix[n][n]={{1,2,3},{4,5,6},{7,8,9}};
	int istridiagonal=1;
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
			if(i-j==0)
			{
				
			}
			else if(i-j==1)
			{
				
			}
			else if(i-j==-1)
			{
				
			}
			else
			{
				if(matrix[i][j]!=0)
				{
					istridiagonal=0;
					break;
				}
			}
		}
	}
	if(istridiagonal)
	printf("Matrix is trigonal");
	else
	{
		printf("Matrix is not trigonal");
	}
}
