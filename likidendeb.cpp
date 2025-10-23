#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	int n;
	printf("Enter the Data:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter ther value:");
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
		}
	}
	struct node *q=head;
	int pos=2;
	for(int i=0;i<pos;i++)
	{
		q=q->next;
	}
	
	struct node *midnode=(struct node *)malloc(sizeof(struct node));
	midnode->data=22;
	midnode->next=NULL;
	midnode->next=q->next;
	q->next=midnode;
	

	
	struct node *firtnode=(struct node *)malloc(sizeof(struct node));
	firtnode->data=22;
	firtnode->next=NULL;
	firtnode->next=head;
	head=firtnode;
	
	struct node *lastnode=(struct node *)malloc(sizeof(struct node));
	lastnode->data=22;
	lastnode->next=NULL;
	last->next=lastnode;
	last=lastnode;
	
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->data);
		p=p->next;
	}
}
