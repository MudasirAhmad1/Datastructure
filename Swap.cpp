#include<stdio.h>
void swap(int a,int b);
int main()
{
	int a=10;
	int b=20;
	swap(a,b);
	printf("The Original Value is : %d,%d ",a,b);
	printf("\n");
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("The Function result: %d,%d",a,b);
}
