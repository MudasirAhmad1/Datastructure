#include<stdio.h>
function1(int n){
if(n>0)
{
	return function1 (n-1)+n;
	printf("\n");
	}	
}
int main()
{
	int n=5;
	printf("\n %d",function1(n)); 
}
