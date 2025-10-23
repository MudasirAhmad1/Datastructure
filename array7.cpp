#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Araay number");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter The Array");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("The Array %d",a[i]);
		printf("\n");
	}
}
