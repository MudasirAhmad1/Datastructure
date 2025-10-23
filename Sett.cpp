#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int index=3;
	int size=5;
	int add=9;
	if(index>=0&&index<size )
	{
		a[index]=add;
	}
	for(int i=0;i<size;i++)
	printf("%d",a[i]);
}
