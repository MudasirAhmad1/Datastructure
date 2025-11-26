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
//		printf("\n The Char is popped out:%c",);

		stack[top--];
	}
}
int  balance(char *exp)
{
	for(int i=0;exp[i]!='\0';i++)
	{
		char ch=exp[i];
		if(ch=='('||ch=='{'||ch=='[')
		{
			push(ch);
		}
		else if(ch==')'||ch=='}'||ch==']') {
			pop();
		}
	}
	if(top==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	char *exp="{((a+b)*(c+d))}";
	if(balance(exp))
	printf("Parathesis is balance");
	else
	printf("Paranthesis Not Balanced");
}
