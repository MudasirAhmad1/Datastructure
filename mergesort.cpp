#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	int k=0;
	int a[5]={3,8,16,20,25};
	int m=5;
	int n=5;
	int b[5]={4,10,12,22,23};
	int c[10];
	while(i<m&&j<n)
	{
	if(a[i]<b[j])
	{
		c[k++]=a[i++];
	}
	else
	{
		c[k++]=b[j++];
	}
	}
	for(k=0;k<10;k++)
	{
		printf("\t %d",a[k]);
	}
}
