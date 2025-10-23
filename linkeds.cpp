#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
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
		printf("Enter the elements %d",i+1);
		scanf("%d",&value);
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
}
