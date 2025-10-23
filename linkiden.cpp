#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int main()
{
	int n;
	printf("Enter the Number of Elements:");
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
	struct node *addnode=(struct node *)malloc(sizeof(struct node));
	addnode=head;
	head=head->next;
	free(addnode);
	
	struct node *z=head;
	while(z->next!=NULL)
	{
		printf("%d",z->data);
		z=z->next;
		
	}
//	struct node *endnode=(struct node *)malloc(sizeof(struct node));
//	endnode=z->next;
//	z->next=NULL;
//	free(endnode);
	
	
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d \t",p->data);
		p=p->next;
	}
	
	
	
}
