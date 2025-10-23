#include<stdio.h>
int main()
{
	int m=2;
	int n=9;
	int sum=1;
	for(int i=0;i<n-1;i++)
	{
		sum=sum*m;
		printf("\t %d",sum);
	}
	sum=sum*m;
	printf("\t %d",sum);
}
