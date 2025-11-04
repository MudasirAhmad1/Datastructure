#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int value)
{
	struct node * newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("\n The Number is Pushed into the stack:%d",value);
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
		printf("\n The Number is popped %d",top->data);
		top=top->next;
		free(temp);
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("\n The Stack is EMpty:");
	}
	else
	{
		printf("\n The data of the Stack %d ",top->data);
	}
}
int main()
{
	push(33);
	push(45);
	pop();
//	pop();
	peek();
}
