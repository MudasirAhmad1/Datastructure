#include<stdio.h>
int main()
{
	char name[]="how are you";
	int i;
	int count=0;
	int num=0;
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i] =='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
		{
		count++;
//		printf("\n %d",count);	
		}
		else if(name[i]>=65 && name[i]<=90|| name[i]>=97 && name[i]<=122)
		{
		num++;	
		}
			
		}
	printf("%d%d",count,num);
}
