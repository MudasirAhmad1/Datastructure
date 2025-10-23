#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	int n;
	printf("Enter the Nodes:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the value:");
		scanf("%d",&value);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->next=NULL;
		newnode->prev=NULL;
		newnode->data=value;
		
		if(head==NULL)
		{
			newnode->next=newnode;
			newnode->prev=newnode;
			head=newnode;
			last=head;
		}
		else
		{
			last->next=newnode;
			newnode->prev=last;
			last=newnode;
		}
	}
	struct node *p=head;
	do{
		printf("%d",p->data);
		p=p->next;
	}
	while(p!=head);
	
}
