#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a=10;
	int b=20;
	swap(&a,&b);
	printf("a: %d b:%d",a,b);
}
