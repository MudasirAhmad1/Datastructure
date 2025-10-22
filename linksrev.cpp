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
	printf("Enter the Number:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;

	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the value:");
		scanf("%d",&value);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			last=head;
		}
		else
		{
			last->next=newnode;
			last=newnode;
			newnode->prev=last;
			
		}
	}
	struct node *topnode=(struct node *)malloc(sizeof(struct node));
		topnode->data=99;
		topnode->next=NULL;
		topnode->prev=NULL;
		topnode->next=head;
		topnode->prev=head;
		head=topnode;
		
		struct node *lastnode=(struct node*)malloc(sizeof(struct node));
		lastnode->data=77;
		lastnode->next=NULL;
		last->next=lastnode;
		last->prev=last;
		last=lastnode;
		
		
		
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
