#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int value)
{
	if(top==size-1)
	{
		printf("\n The Stack is Full");
	}
	else
	{
		printf("\n The Number is Has been pushed into the stack %d",value);
		stack[++top]=value;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n The stack is Empty");
	}
	else{
	printf("\n The number is has been Popped %d",stack[top--]);	
	}
}
int main()
{
	push(1);
	push(56);
	push(2);
	pop();
	
}
