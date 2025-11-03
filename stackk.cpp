#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("The Stack is Full");
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
		printf("The stack is Empaty");
	}
	else
	{
		printf("The Number is Popped %d \n",stack[--top]);
	}
}
int main()
{
	push(5);
	push(34);
	push(78);
	pop();
	pop();
}
