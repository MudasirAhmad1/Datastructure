#include<stdio.h>
//void function1(int n)
//{
//	if(n>0)
//	{
//		printf("%d",n);
//		function1(n-1);
//	}
//}
//int main()
//{
//	int x=5;
//	function1(x);
//}

void function(int n)
{
	int i=1;
	while(i<=n)
	{
		printf("%d",i);
		i++;
	}
}
int main()
{
	int x=5;
	function(x);
}
