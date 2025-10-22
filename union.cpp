#include<stdio.h>
int main()
{
	int a[5]={3,8,16,20,25};
	int m=5;
	int n=5;
	int b[5]={4,10,12,22,23};
	int c[10];
	for(int i=0;i<m;i++)
	{
		c[i]=a[i];
	}
//	while(m>0&&n>0)
//	{
//		for(int i=0;i<n;i++)
//		c[i]=a[i];
//	}
	for(int i=0;i<10;i++)
	printf("\t %d",c[i]);
}
