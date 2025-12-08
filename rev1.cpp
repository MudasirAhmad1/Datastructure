#include<stdio.h>
int add(int n)
{
	if(n>0)
	{
		add(n-1);
		printf("%d: ",n);
		
	}
}
int main()
{
	int n=9;
	add(n);
}
