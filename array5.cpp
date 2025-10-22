#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	int *q;
	p=(int *)malloc(5*sizeof(int));
	p[0]=9;
	p[1]=8;
	p[2]=3;
	p[3]=0;
	p[4]=5;
	q=(int *)malloc(10*sizeof(int));
	for(int i=0;i<5;i++)
	q[i]=p[i];
	delete []p;
	p=q;
	q=NULL;
	for(int i=0;i<10;i++)
	printf("%d",p[i]);
	
	
}
