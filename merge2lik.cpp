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
	second->data=55;
	third->data=66;
	first->next=second;
	second->next=third;
	third->next=first;
	second->prev=first;
	first->prev=third;
	
	struct node *p=first;
	do{
		printf("%d ",p->data);
		p=p->next;
	}while(p!=first);
}
