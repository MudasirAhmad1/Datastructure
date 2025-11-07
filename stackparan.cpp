#include<stdio.h>
#include<Stdlib.h>
struct node{
	char data;
	struct node *next;
};
struct node *top=NULL;
void push(char value)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("The Stack is Empty:");
	}
	else
	{
		newnode->data=value;
		printf("\n The Number is Pushed into Stack:%c",value);
		newnode->next=top;
		top=newnode;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("The Stack is Empty:");
	}
	else
	{
		struct node *temp=top;
		printf("\n The Number is Popped %c",top->data);
		top=top->next;
		free(temp);
	}
}
int balance(char *exp)
{
	int i;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='(';
		push(exp[i]);
		else if(exp[i]==')')
		{
			if(top==NULL)
			{
				return 0;
				pop();
			}
		}
	}
	if(top==NULL)
	return 1;
	else
	return 0;
}
int main()
{
	char *exp="((a+b)*(c+d))";
	printf("\n %d is balanced",balance(exp));
	return 0;
}
