#include<stdio.h>
#include<stdlib.h>
struct node {
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
	printf(" \n The Number is Have been Pushed:%d",value);
}
void pop()
{
	struct node *temp=top;
	printf("\n The elemet is popped:%d",top->data);
	top=top->next;
	free(temp);
}
void peek()
{
	if(top==NULL)
	{
		printf("The stack is Empty:");
	}
	else
	{
		printf("\n The stack is data:%d",top->data);
	}
}

void display()
{
	struct node *p=top;
	if(p==NULL)
	{
		printf("Stack is Empty:");
		return;
	}
	while(p!=NULL)
	{
		printf("\n The data is %d",p->data);
		p=p->next;
		//printf("Null \n");
	}
}
int main()
{
	push(34);
	push(12);
	push(34);
	pop();
	peek();
	display();
}
