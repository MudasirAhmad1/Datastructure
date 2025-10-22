#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *prev;
	struct node *next;
};
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the Value:");
		scanf("%d",&value);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=newnode;
			last=head;
		}
		else
		{
			last->next=newnode;
			newnode->prev=head;
			last=newnode;
		}
	}
	struct node *addnode=(struct node *)malloc(sizeof(struct node));
		addnode->data=33;
		addnode->next=NULL;
		addnode->prev=NULL;
		
		addnode->next=head;
		head=addnode;
		
		struct node *endnode=(struct node *)malloc(sizeof(struct node));
		endnode->data=99;
		last->next=endnode;
		endnode->prev=last;
		endnode->next=NULL;
		
		struct node *temp=head;
		int position=3;
		for(int i=0;i<position;i++)
		{
			//printf("%d",temp->data);
			temp=temp->next;
		}
		struct node *midnode=(struct node *)malloc(sizeof(struct node));
		midnode->data=55;
		midnode->next=temp->next;
		temp->next=midnode;
		midnode->prev=temp;
		
		
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->data);
		p=p->next;
	}
	

}
