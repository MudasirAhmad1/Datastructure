#include<stdio.h>
int main()
{
	int s=10;
	int a[s]={1,2,3,4,5,6,7,8,9,11};
	int i;
	int found;
	for(i=0;i<s;i++)
	{
		if(a[i]>a[i+1])
		{
		printf("The Array is not sorted: %d",a[i]);
		found=1;
		break;
		}
		
		else
		{
			found=0;
		}
	}
	if(!found)
	printf("The Array is sorted.");
	
}
