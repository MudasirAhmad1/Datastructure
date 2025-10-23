#include<stdio.h>
int main()
{
	int a[20]={1,2,3,4,5,6,7,8,9,99};
	int num=5;
	int found;
	for(int i=0;i<10;i++)
	{
		if(num==a[i])
		{
			printf("\n Number is found:%d",i+1);
			printf("\n");
			found=1;
			int temp;
			temp=a[i];
			a[i]=a[i-1];
			a[i-1]=temp;
			break;
		}
	}
		if(!found){
		printf("Not Found");
	}
	for(int i=0;i<10;i++)
	{
		printf("\t %d",a[i]);
	}
}
