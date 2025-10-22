#include<stdio.h>
int main()
{
	char a[]="decimal";
	char b[]="4edical";
	int adata=1;
	int bdata=1;
	int k,l;
//	for(int i=0;a[i]!='\0';i++)
//	{
//		adata=i;
//	}
//	for(int i=0;b[i]!='\0';i++)
//	{
//		bdata=i;
//	}
//	if(adata!=bdata)
//	{
//		printf("Not Same");
//	}
//	else{
//		printf("The Anagram");
//	}
	for(k=0,l=0;a[k]!='\0',b[l]!='\0';l++)
	{
		if(a[k]==a[l])
		{	
		printf("The are same");
		printf("%c",a[k]);
	}
		else{
			k++;
			printf("\n");
			printf("Not same");
			printf("%c",a[k]);
	}
	}
	
}
