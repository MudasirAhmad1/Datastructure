#include<stdio.h>
void add(int a[],int l)
{
	for(int i=0;i<l;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	add(a,5);
	
}
