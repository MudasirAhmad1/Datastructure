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
	printf("Enter the Number of ELements:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the Number:");
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
			newnode->prev=last;
			last=newnode;
		}
	}
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		temp->next=head;
		head=head->next;
		head->prev=NULL;
		free(temp);
		
		
		struct node *temp2=head;
		struct node *q=NULL;
		while(temp2->next!=NULL)
		{
			q=temp2;
			temp2=temp2->next;
		}
		struct node *temp1=(struct node *)malloc(sizeof(struct node));
		temp1=q->next;
		q->next=NULL;
		free(temp1);
		
		int pos=2;
		struct node *j=head;
		for(int i=0;i<pos-1;i++)
		{
			j=j->next;
		}
		struct node *t=(struct node *)malloc(sizeof(struct node));
	    t=j->next;
	    j->next=t->next;
	    free(t);
	    
//		j->next=t->next;
//		free(t);
		
		printf("%d",t->data);
		printf("\n");
		printf("%d",j->data);
		printf("\n");
		
		
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->data);
		p=p->next;
	}
}
