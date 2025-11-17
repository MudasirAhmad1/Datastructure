#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("\n The stack is Full");
	}
	else
	{
		printf("\n The Element is Pushed into the stack is:  %d",value);
		stack[++top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n The stack is Empty");
	}
	else
	{
		printf("\n The Element is popped:  %d ",stack[top--]);
	}
}
int main()
{
	push(45);
	push(23);
	pop();
}
