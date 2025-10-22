#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5};
	int l=5;
	int pos;
	printf("Enter the element you want to delete:");
	scanf("%d",&pos);
	int e;
	e=a[pos];
	printf("%d \n",e);
	for(int i=pos;i<l;i++)
	{
		a[i]=a[i+1];
//		printf("%d",a[i]);
	}
	for(int i=0;i<l;i++)
	{
		printf("\n");
		printf("%d",a[i]);
	}
}
