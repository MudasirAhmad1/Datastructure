#include<stdio.h>
int main()
{
	int n=6;
	char name[n]="Mudasir";
	char name1[n];
	int found;
	for(int i=0;name[i]!='\0';i++)
	{
		name1[i]=name[n-i-2];
	}
	for(int i=0;name[i]!='\0';i++)
	{ 
		if(name[i]!=name1[i])
		{
			printf("\n");
			printf("The String is not palandrome");
			break;
		}
		else{
//			printf("\n");
			found=1;
//			printf("The Number is  palandrome %d",found);
		}
	}
	if(!found==0)
		printf("The Number is Palandrome");
//	for(int i=0;name[i]!='\0';i++)
//	printf("%c",name1[i]);
	
}
