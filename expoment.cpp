#include<stdio.h>
int func1(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	return func1(m,n-1)*m;
}
int main()
{
	int n=5;
	int m=2;
	int sum;
	printf("%d",func1(m,n));
}
