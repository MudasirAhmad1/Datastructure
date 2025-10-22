#include<stdio.h>
#include<stdlib.h>
int * array(int n)
{
	int *p;
	p=(int *)malloc(n*sizeof(int));
	return (p);
}
int main()
{
	int *a;
	a=array(5);
}
