#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int index=3;
	int size=5;
	if(index >=0&&index<size)
	{
		printf("%d",a[index]);
	}
	else{
		printf("Index is not valid");
	}
}
