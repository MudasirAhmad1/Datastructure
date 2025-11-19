#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int value)
{
	printf("\n The Number is Pushed into the stack: %d",value);
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==NULL)
	{
		printf("\n The stack is Empty:");
	}
	else
	{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("\n The Number is popped %d",top->data);
	temp=top;
	top=top->next;
	free(temp);	
	}
}
int main()
{
	push(45);
	push(2);
	pop();
}
