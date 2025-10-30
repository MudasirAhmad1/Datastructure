#include<stdio.h>
#define size=5;
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	printf("Stack is Full\n");
	else
	stack[++top]=value;
}
void pop(int value)
{
	if(top==-1)
	printf("Stack is Full\n");
	else
	printf("popped:%d\n",stack[top--]);
}



int main()
{
	int a[size];
	int top=-1;
	
	
	
	printf("The world is good:");
}
