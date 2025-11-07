#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct node {
	char data;
	struct node *next;
};
struct node *top=NULL;
void push(char value[])
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	strcpy(newnode->data, value);
//	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("\n The Number is Pushed %s: ",value);
}
void pop()
{
if(top==NULL)
{
	printf("\n The Stack is Empty: ");
}
else
{
	struct node *temp=top;
	printf("\n The Number is Popped %s",top->data);
	top=top->next;
	free(temp);
}
}
int main(){
	push("Mudasir");
	push("Muzamil");
	pop();
}
