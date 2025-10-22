#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,44};
	int low=0;
	int size=10;
	int high=size-1;
	int mid;
	int number=7;
	while(low<high)
	{
		mid=low+high/2;
		if(number==a[mid])
		{
			printf("Number found:");
		}
		else if(number<a[mid])  //4<5 yes// high=4 //  low =0
		{
			high=mid-1;
		}
		else{
			low=mid+1;  // if number =7  //low= 5+1=6 ,low 5 and high =10
		}
	}
}
