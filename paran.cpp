#include<stdio.h>
#define size 100
int top=-1;
char stack[size];
void push(char value)
{
	if(top==size-1)
	{
		printf("\n The stack is Full:");
	}
	else
	{
		printf("\n The Char is pushed into the stack:%c",value);
		stack[++top]=value;
	}
	
}
void pop()
{
	if(top==-1)
	{
		printf("\n The Stack is Full:");
	}
	else
	{
		printf("\n The Char is popped out:%c",stack[top--]);
	}
}
int main()
{
	push('a+b');
	
}
