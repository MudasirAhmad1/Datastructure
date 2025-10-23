#include<stdio.h>
int main()
{
	int a[5]={1,2,4};
	int p=0;
	for(int i=0;i<5;i++){
		if(a[i]==NULL)
		{
		p=p;	
		}
		else
		{
			p++;
		}
	}
	printf("%d",p);
}
