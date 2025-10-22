#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	//p=new int [5];
//	p=(int *)malloc(5*sizeof(int));
	p[0]=9;
	p[1]=8;
	p[2]=3;
	p[3]=0;
	p[4]=5;
	
	for(int i=0;i<5;i++)
	printf("%d",a[i]);
	printf("\n");
	for(int i=0;i<5;i++)
	printf("%d",p[i]);
	
	free (p);
}
