#include<stdio.h>
int main()
{
	char a[]="How are  you";
	int count=1;
	for(int i=0;a[i]!='\0';i++)
	{
		if (a[i]==' ' && a[i-1]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
