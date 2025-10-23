#include<stdio.h>
int main()
{
	int n=5;
	int m=10;
	int a[n]={1,2,3,4,5};
	int b[m]={6,7,8,9,10};
	int i,j;
	for(int i=0,j=n;i<n,j<m;i++,j++)
	{
		b[j]=a[i];
	}
	for(int k=0;k<m;k++)
	{
		printf("%d",b[k]);
	}
}
