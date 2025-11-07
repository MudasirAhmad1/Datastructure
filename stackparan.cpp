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
	printf("\n The Number is Pushed %d: ",value);
}
void pop()
{
	struct node *temp=top;
	printf("\n The Number is Popped %d",top->data);
	top=top->next;
	free(temp);
}
int main(){
	push(45);
	push(3);
	pop();
}
