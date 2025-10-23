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
	struct node *prev=head;
	while(q->next!=NULL)
	{
		prev=q;
		q=q->next;
	}
	printf("%d",prev->data);
	printf("\n");
	printf("%d",q->data);
	printf("\n");
	
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp=q;
	printf("%d",temp->data);
	prev->next=NULL;
	free(temp);

	
	
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->data);
		p=p->next;
	}
}
