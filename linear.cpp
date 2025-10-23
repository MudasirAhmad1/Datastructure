#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int num=99;
	int found;
	for(int i=0;i<10;i++){
		if(num==a[i])
		{
			printf("ELement Found: %d",i);
			found=1;
			break;
			
		}
		
		
	}
	if(!found)printf("Not found:%d",num);
}
