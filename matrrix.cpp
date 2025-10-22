#include<stdio.h>
int main()
{
	int n=3;
	int matrix[n][n];
	int array[]={1,2,3,4,5,6};
	int array2[]={9,8,7};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				matrix[i][j]=array[i];
				printf("%d",matrix[i][j]);
			}
			else if(i<j)
			{
				matrix[i][j]=array[i+2];
				printf("%d",matrix[i][j]);
			}
			else
			{
				matrix[i][j]=0;
				printf("%d",matrix[i][j]);
			}
		}
		printf("\n");
	}
}
