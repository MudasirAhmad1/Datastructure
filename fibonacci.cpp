#include<stdio.h>
int fun(int m,int n)
{
	if(n==0)
	return 1;
	else{
		return fun(m,n-1)*m;
	}
}
int main()
{
	int m=2,n=5;
	printf("%d",fun(m,n));
}
