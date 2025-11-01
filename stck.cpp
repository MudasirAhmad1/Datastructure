#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("The Stack is Full:");
	}
	else
	{
		stack[++top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is Empty:");
	}
	else
	{
		printf("The Number is pop:%d",stack[top--]);
	}
}
int main()
{
	push(22);
	push(3);
	pop();
}
