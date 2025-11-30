#include<stdio.h>
void sum(int a[])
{
for(int i=0;i<6;i++)
{
	printf("\n %d",a[i]);
	}	
}
int main()
{
	int a[]={1,2,3,4,5,5};
	sum(a);
}
