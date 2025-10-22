#include<stdio.h>
void fun2(int n);
void fun1(int n)
{
	if(n>0)
	{
		printf("\t %d",n);
		fun2(n-1);
	}
}
void fun2(int n)
{
	if(n>1)
	{
		printf("\t %d",n);
		fun1(n/2);
	}
}
int main()
{
	fun1(20);
}
