#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n The swap is a and b %d %d",*a,*b);
}
int main()
{
	int a=9;
	int b=8;
	printf("\n Before the Swap:%d %d",a,b);
	swap(&a,&b);
	printf("\n Before the Swap:%d %d",a,b);
}
