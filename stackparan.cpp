#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *next;
};
struct node *top=NULL;
struct node *newnode=(struct node *)malloc(sizeof(struct node));
void push(int value)
{
	if(newnode==NULL)
	{
		printf("Stack is Full:");
	}
	else
	{
	newnode->data=value;
	newnode->next=top;
	top=newnode;
}
}
void pop()
{
	if(top==NULL)
	{
		printf("\n The Stack is Empty:");
	}
	else
	{
		struct node *temp=top;
		top=top->next;
		printf("%d The Number is Popped %d",top->data);
		free(temp);
	}
}
int main()
{
	push(56);
	push(3);
	pop();
}
