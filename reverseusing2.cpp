#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,33};
	int b[10];
	int size=10;
	int j=10-1;
	
	for(int i=0;i<size;i++){
//		b[i]=a[size-i-1];
		b[i] = a[size - 1 - i];  //this will minus size 10-1 everytime so it will be 9,8,7,6,5,4,3,2,1,0
		printf(" \t %d",size-1-i);
//		printf("\n %d",b[i]);
	}
//	for(int i=0;i<10;i++)
//	printf("\t %d",b[i]);
}

