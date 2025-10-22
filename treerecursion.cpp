#include<stdio.h>
void function1(int n)
{
	if(n>0)
	{
		printf("Result: %d \n",n);
		function1(n-1);
		function1(n-1);
	}
	
}
int main()
{
	int x=3;
	function1(x);
}
