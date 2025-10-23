#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5};
	int l=5;
	int add=45;
	a[l]=add;
	l++;
	for(int i=0;i<l;i++)
	printf("\t %d",a[i]);
}
