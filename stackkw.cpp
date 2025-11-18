#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(int value)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("\n The Number is Pushed into the stack:%d",newnode->data);
}
void pop()
{
	if(top==NULL)
	{
		printf("\n The staack is Empty:");
	}
	else
	{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp=top;
	top=top->next;
	free(temp);	
	}
}

void display()
{
	struct node *p=top;
	while(p!=NULL)
	{
		printf("\n The data is %d",p->data);
		p=p->next;
	}
}
int main()
{
	push(56);
	push(9);
	push(2);
	pop();
	display();
}
