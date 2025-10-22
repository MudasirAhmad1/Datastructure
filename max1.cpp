#include<stdio.h>
int main()
{
	int a[5]={1,2,9,4,5};
	int size=5;
	int found;
	int max=a[0];
	for(int i=1;i<=5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			found=1;
		}
	}
	if(!found){
		printf("Greater");
	}
//	for(int i=0;i<size;i++)
//	printf("%d",a[i]);
	printf("%d",max);
	 
}
