#include<stdio.h>
#include<conio.h>
int main()
{
	int *p;
	int *q;
	q=new int[10];
	p=new int[5];
	p[0]=1;
	p[1]=2;
	p[2]=3;
	p[3]=4;
	p[4]=5;
	
	for(int i=0;i<5;i++)
	{
		q[i]=p[i];
//		printf("%d",q[i]);
	}
	delete []p;
	p=q;
	q=NULL;
	for(int i=0;i<5;i++)
	{
		printf("%d",p[i]);
	}
	
	
}
