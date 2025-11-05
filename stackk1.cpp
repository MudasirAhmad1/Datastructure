#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf(" \n The Stack is Full:");
	}
	else
	{
		printf(" \n The Element is push into the stack:%d",value);
		stack[++top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n The Stack is Empty:");
	}
	else
	{
		printf("\n The Element is Popped %d ",stack[top--]);
	}
}
int main()
{
	push(56);
	push(45);
	push(5);
	push(5);
	pop();
	pop();
	pop();
}

