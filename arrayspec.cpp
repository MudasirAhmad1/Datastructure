#include<stdio.h>
int main()
{
	int n=5;
	int a[n]={99,88,77};
	int x=45;
	int index=2;
	for(int i=n;i>index;i--){
		a[i]=a[i-1];
	}
	a[index]=x;
	n++;
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}
