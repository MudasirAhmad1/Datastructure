#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	head->data=45;
	head->next=second;
	second->data=56;
	second->next=third;
	third->data=23;
	third->next=NULL;
	
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=90;
	third->next=newnode;
	newnode->next=NULL;
	
	struct node *p=head;
	while(p!=NULL)
	{
		printf("\n The Number is %d",p->data);
		p=p->next;
		
	}
}
