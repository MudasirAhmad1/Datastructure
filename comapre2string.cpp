#include<stdio.h>
int main()
{
	int n=7;
	char name[n]="Mudasir";
	char name1[n]="mudasir";
	int i,j;
	for(int i=0,j=0;name[i]!='\0',name1[i]!='\0';i++,j++)
	{
		if(name[i]!=name1[j])
		{
			printf("Break is not Equal");
			break;
		}
	}
}
