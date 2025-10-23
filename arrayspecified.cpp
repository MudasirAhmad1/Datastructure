#include<stdio.h>
int main()
{
	int length=5;
	int a[10]={1,2,3,4,5};
	int index=2;
	int add=23;
	for(int i=length;i>index;i--)
	{
		a[i]=a[i-1];
		
	}
	a[index]=add;
	length++;
	for(int i=0;i<length;i++)
	{
		printf("\t %d",a[i]);
	}
	
}
