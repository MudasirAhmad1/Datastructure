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
int main()
{
	push('m');
	pop();
}
