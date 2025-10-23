#include<stdio.h>
int fun(int n,int m)
{
	if(m==0)
	{
		return 1;
	}
		return fun(m, n-1)*m;
}
int main()
{
	int n=2;
	int m=3;
	printf("%d",fun(n,m));
}
