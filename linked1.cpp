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
	printf("Enetr the Data");
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
		else{
			last->next=newnode;
			last=newnode;
		}
	}
	
	struct node *extranode=(struct node *)malloc(sizeof(struct node));
	extranode->data=99;
	extranode->next=NULL;
	last->next=extranode;
	last=extranode;
	
	struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 77;
    newnode->next = NULL;
	
	 int position = 2; // 0-based index
    struct node* temp = head;
    for (int i = 0; i < position; i++) {
        if (temp == NULL) {
            printf("Position out of range.\n");
            return 0;
        }
        temp = temp->next;
    }

    // Step 4: Insert the new node
    newnode->next = temp->next;
    temp->next = newnode;
    struct node *p=head;
	while(p!=NULL)
	{
		printf("The List: %d \t",p->data);
		p=p->next;
		}	
}
