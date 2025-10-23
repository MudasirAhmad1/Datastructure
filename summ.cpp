#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int size=5;
	int found;
	int max=0;
	int temp=0;
	for(int i=0;i<5;i++)
	{
		max=max+a[i];
	}
	printf("%d",max);
//	3= 1+2
//	5= 2+3
//	2= 3+4
//	2= 4+5;
	
	
}
