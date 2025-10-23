#include<stdio.h>

void array(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	array(a,5);
}
