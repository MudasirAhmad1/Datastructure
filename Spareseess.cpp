#include<stdio.h>
#define size 3
int main()
{
	int a[size][size]={
	{0,0,5},
	{0,4,0},
	{1,0,0}
	};
	int b[size][size]={
	{0,0,5},
	{0,4,0},
	{1,0,0}
	};
	int c[size][size];
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	
}
