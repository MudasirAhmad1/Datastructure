#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	struct node *prev=NULL;	
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the Value of Node:");
		scanf("%d",&value);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		newnode->prev=NULL;
		if(head==NULL)
		{
			head=newnode;
			last=head;
			head->prev=last;
		}
		else
		{
			last->next=newnode;
			newnode->prev=last;
			last=newnode;
			
		}
	}
	
		struct node *firstnode=(struct node *)malloc(sizeof(struct node));
		firstnode->data=77;
		firstnode->next=NULL;
		firstnode->prev=NULL;
		
		firstnode->next=head;
		firstnode->prev=head;
		head=firstnode;
	
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
