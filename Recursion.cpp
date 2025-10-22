#include<stdio.h>
void function1( int n)
{
	if(n>0)
	{
		function1(n-1);
		printf("%d",n);
	}
}
int main()
{
	int x=9;
	function1(x);
}
