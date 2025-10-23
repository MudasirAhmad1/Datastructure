#include<stdio.h>
#include<stdlib.h>
void display();
struct node {
	int data;
	struct node *next;
};
void display()
	{
		printf("Hello world:");
	}
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
		display();
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
	struct node *p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

	
