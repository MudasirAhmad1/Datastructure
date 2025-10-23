#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
int main()
{
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
		int value;
		printf("Enter the data:");
		scanf("%d",&value);
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=value;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			last=head;
		}
		else{
			last->next=newnode;
			last=newnode;
		}
	}
	struct node *temp=head;
	int position=3;
	struct node *deletenode=(struct node *)malloc(sizeof(struct node));
	for(int i=0;i<position-1;i++)
	{
		temp=temp->next;
	}
	deletenode=temp->next;
	temp->next=deletenode->next;
	free(deletenode);
	struct node *p=head;
	while(p!=NULL)
	{
	printf("%d \t",p->data);
		p=p->next;
	}
}
