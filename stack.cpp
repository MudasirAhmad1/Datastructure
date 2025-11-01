#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1)
	printf("Stack is Full\n");
	else
	stack[++top]=value;
}
void pop()
{
	if(top==-1)
	printf("Stack is Full\n");
	else
	printf("popped:%d\n",stack[top--]);
}
void peek()
{
	if(top==-1)
	printf("Stack is Full\n");
	else
	printf("popped:%d\n",stack[top]);
}


int main()
{
	push(10);
	push(29);
	push(9);
	peek();
	pop();
	printf("The world is good:");
}
