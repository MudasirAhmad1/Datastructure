#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return fact(n-1)*n;
	}
}
int main()
{
	int n=6;
	printf("%d",fact (n));
}
