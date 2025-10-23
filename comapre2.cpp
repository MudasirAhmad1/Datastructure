#include<stdio.h>
int main()
{
	int n=10;
	char a[n]="Mudasir";
	char b[n]="Mudasi2";
	int i,j;
	
	for(i=0,j=0;a[i]!='\0',b[i]!='\0';i++,j++)
	{
		if(a[i]!=b[j])
		{
			printf("Not Equal");
			break;
		}
	}
}
