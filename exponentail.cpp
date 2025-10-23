#include<stdio.h>
int func1(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return func1(m,n-1)*m;
	}
}
int main()
{
	int m=2;
	int n=5;
	printf("%d",func1(m,n));
}
