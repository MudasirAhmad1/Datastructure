#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("Stack is Full:");
	}
	else{
	stack[++top]=value;
	printf("Stack:%d",stack[top]);	
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The stack is Empty:");
	}
	else
	{
		printf("The Number is Popped %d",stack[top--]);
	}
}
int main()
{
	push(56);
	push(67);
	pop();
}
