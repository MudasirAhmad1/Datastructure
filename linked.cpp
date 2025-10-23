#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head=NULL;
	struct node *second=NULL;
	struct node *third=NULL;
	struct node* newnode=NULL;
	head=(struct node *)malloc(sizeof(struct node));
	second=(struct node *)malloc(sizeof(struct node));
	third=(struct node *)malloc(sizeof(struct node));
	newnode= (struct node*)malloc(sizeof(struct node));
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	newnode->data = 99; // New number
	newnode->next = second->next;
	second->next = newnode;
	struct node *temp=head;
	 // Point to third
	 // Second now points to new node
	 int count=0;
	while(temp!=NULL)
	{
		count=count+temp->data;
		temp=temp->next;
//		printf("%d",count);
	}
	printf("%d",count);
}
