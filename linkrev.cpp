#include<stdio.h>
#include<stdlib.h>
struct node{
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
			last=newnode;
		}
		else
		{
			last->next=newnode;
			newnode->prev=last;
			last=newnode;
			newnode->next=head;
		}
		
	}
//		struct node *topnode=(struct node *)malloc(sizeof(struct node));
//		topnode->data=99;
//		topnode->next=NULL;
//		topnode->prev=NULL;
//		topnode->next=head;
//		head=topnode;
//		head->prev=topnode;
//		head->prev=NULL;
//		
//		struct node *lastnode=(struct node *)malloc(sizeof(struct node));
//		lastnode->data=88;
//		lastnode->next=NULL;
//		lastnode->prev=NULL;
//		last->next=lastnode;
//		lastnode->prev=last;
//		last=lastnode;
		
//		int pos=2;
//		struct node *q=head;
//		for(int i=0;i<pos-1;i++)
//		{
//			q=q->next;
//		}
//		
//		struct node *midnode=(struct node *)malloc(sizeof(struct node));
//		midnode->data=66;
//		midnode->next=NULL;
//		midnode->prev=NULL;
//		midnode->next=q->next;
//		q->next=midnode;
//		midnode->prev=q;
//		printf("%d",midnode->data);
//		printf("%d",q->data);
		
	struct node *p=head;
//	if(p!=NULL)
	//while(p!=head)
	do{
		printf("%d ",p->data);
		p=p->next;
	}
	while(p!=head);
}
