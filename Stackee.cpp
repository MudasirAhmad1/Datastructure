#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("\n The STack is Full:");
	}
	else
	{
		printf("\n The Element is Pushed into the stack:%d",value);
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
		printf("\n The Element is popped out %d",stack[top--]);
	}
}
void peek()
{
	if(top==-1){
		printf("\n The stack is Empty:");
	}
	else
	{
		printf("\n The top Eleement is %d",stack[top]);
	}
}
int main()
{
	push(45);
	push(25);
	pop();
	peek();
}
