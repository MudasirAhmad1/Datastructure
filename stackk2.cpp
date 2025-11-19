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
int main()
{
//	push(34);
//	push(34);
//	push(34);
//	push(34);
//	push(34);
//	push(34);
	pop();
}
