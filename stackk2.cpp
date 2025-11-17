#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int value)
{
	if(top==size-1)
	{
		printf("\n The size of the stack is full:");
	}
	else
	{
		printf("\n The Number is pushed into the stack: %d",value);
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
		printf("\n The Element is Popped is %d",stack[top--]);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\n The stack is Empty");
	}
	else
	{
		printf("\n Top Element is %d",stack[top]);
	}
}
int main()
{
	push(34);
	push(43);
	push(32);
	pop();
	peek();
}
