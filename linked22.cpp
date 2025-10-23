#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
};
int main()
{
	struct node *first=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	first->data=34;
	first->next=second;
	first->prev=third;
	

	second->data=22;
	second->next=third;
	second->prev=first;
	
	
	third->data=34;
	third->next=first;
	third->prev=second;
	
	struct node *p=first;
	do{
		printf("%d ",p->data);
		p=p->next;
	}
	while(p!=first);
}
