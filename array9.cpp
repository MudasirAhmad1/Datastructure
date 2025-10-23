#include<stdio.h>
int main()
{
	int n;
	int x;
	printf("Enter the Element:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		
		printf("Enter the elements:");
		scanf("%d",&a[i]);
	}
	printf("Enter the Number you want to add in the End:");
	scanf("%d",&x);
	a[n]=x;
	n++;
	for(int i=0;i<n;i++)
	{
		printf("\t  %d",a[i]);
	}
}
