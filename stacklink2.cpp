#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}
struct node *top=NULL;
void push(int value)
{
	struct node * newnode=(struct node *)malloc((sizeof)struct node);
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("The Number is Pushed into the stack:%d",value);
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack is Empty:");
		return;
	}
	else
	{
		struct node *temp=top;
		printf("The Number is popped %d",top->data);
		top=top->next;
		free(temp);
	}
}

