#include<stdio.h>
int main()
{
	int a[10]={5,55,33,45,50,68,7098,898,9,99};
	int size=10;
	int max=a[0];
//	printf("%d",max);
	for(int i=0;i<size;i++)
	{
		if(max<a[i]) //if max is less than a[i] then copy the element of a[i] to max to get the maximium number;
//		if(max>a[i]) //if max is greater than a[i] then copy the element from a[i] to max and u will minum number
		{
			max=a[i];
		}
		
	}
	printf("%d",max);
}
