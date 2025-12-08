#include<stdio.h>
int add(int n)
{
	if(n>0)
	{
		
		printf("%d: ",n);
		add(n-1);
		
	}
}
int main()
{
	int n=9;
	add(n);
}
