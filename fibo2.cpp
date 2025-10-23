#include<stdio.h>
void function1(int a,int b,int c,int n)
	{
		if(n>0)
		{
			printf(" %d ",a);
			c=a+b;
			a=b;
			b=c;
			function1(a,b,c,n-1);
		}
	}
int main()
{
	int a=0;
	int b=1;
	int c=0;
	function1(a,b,c,10);
	
}


