#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};
	int c[10];
	int d=5;
	int size=10;
	for(int i=0;i<5;i++)
	{
		c[i]=a[i];
		c[i+d]=b[i];
	}
	for(int i=0;i<5;i++)
	{
		
	}
	for(int i=0;i<10;i++)
	printf("\t %d",c[i]);
}
