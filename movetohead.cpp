#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,99};
	int found;
	int num=8;
	for(int i=0;i<10;i++)
	{
		if(num==a[i])
		{
			printf("\n The Number found:%d",i);
			int temp;
			temp=a[0];
			a[0]=a[i];
			a[i]=temp;
			found=1;
			break;
		}
	}
	if(!found)
	{
		printf("Not Found:");
	}
	for(int i=0;i<10;i++)
	{
		printf("\t %d",a[i]);
	}
}
