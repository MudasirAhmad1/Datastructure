#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int value)
{
	if(top==size-1)
	{
		printf("\n The Stack is Full:");
	}
	else
	{
		printf("\n The Number is Pushed into the stack:%d",value);
		stack[++top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The Stack is Empty:");
	}
	else
	{
		printf("\n The Number has been Popped Out: %d", stack[top--]);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\n The stack is Empty: ");
	}
	else
	{
		printf("\n The Peek Element is %d",stack[top]);
	}
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	pop();
	peek();
}
