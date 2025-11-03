#include<stdio.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	{
		printf("The stack is full:");
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
			printf("stack is empty");
		}
		else
		{
			printf("popped %d",stack[top--]);
		}
	}
	void peek()
	{
		if(top==-1)
		{
			printf("stck is empty");
		}
		else
		{
			printf("top emeplent: %d",stack[top]);
		}
	}
	int main()
	{
		push(10);
		push(30);
		pop();
	}
