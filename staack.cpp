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
printf(" \n The Number is Pushed into the stack %d",value);
}
void pop()
{
	struct node *temp=top;
	printf("\n The Number poped %d", top->data);
	top=top->next;
	free(temp);
}
int main()
{
	push(45);
	push(45);
	push(45);
	push(45);
	push(45);
	push(45);
	push(45);

	
	push(23);
	pop();
}



