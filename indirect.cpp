#include<stdio.h>
void tree2(int n);
void tree1(int n)
{
	if(n>0)
	{
		printf("%d",n);
		tree2(n-1);
	}
}
void tree2(int n)
{
	if(n>1)
	{
		printf("%d",n);
		tree1(n/2);
	}
}
int main()
{
	int n=20;
	tree1(n);
//	tree2(n);

}
