#include<stdio.h>
int main()
{
	char a[]="Mudaassirr";
	int i,j;
	for(i=0,j=0;a[i]!='\0',a[j]!='\0';j++)
	{
	if(a[i]==a[j+1])
	{
		printf("The Number is repeating %c",a[i]);
		i++;
		}	
		else{
			i++;
			printf("\n");
			printf("The number is not repeating");
		}
	}
}
