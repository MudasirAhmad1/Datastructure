#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n;
	printf("\n Enter the Elements of the array:");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("Enter the NUmber:");
		scanf("%d", &arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}
