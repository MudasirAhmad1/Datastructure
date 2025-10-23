#include<stdio.h>
int main()
{
	int a[10]={11,33,44,55,66};
	int size=5-1;
	int found=22;
	for(int i=size;i>=0;i--)
	{
	if(found<a[i])
	{
		
		a[i+1]=a[i];
		//printf("\t %d",a[i]);
		if(a[i]<found){
		
	}
	else{
		a[i]=found;
	}
		
		}	
	}
	size++;
	for(int i=0;i<=size;i++)
	printf("\t %d",a[i]);
}
