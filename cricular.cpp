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
		newnode->prev=NULL;
		
		if(head==NULL)
		{
			head=newnode;
			last=head;
		}
		else{
			last->next=newnode;
			last=newnode;
			newnode->prev=last;
			newnode->next=head;
			
		}
		
	}
	 if (head != NULL && last != NULL) {
        head->prev = last;
        last->next = head;
    }
	 struct node *p = head;
    if (p != NULL) {
        do {
            printf("%d ", p->data);
            p = p->next;
        } while (p != head);
    }

	
}
