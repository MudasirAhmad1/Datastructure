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
	printf("Enter the Data:");
	scanf("%d",&n);
	struct node *first=(struct node *)malloc(sizeof(struct node));
	struct node *second=(struct node *)malloc(sizeof(struct node));
	struct node *third=(struct node *)malloc(sizeof(struct node));
	first->data=44;
	first->next=second;
	first->prev=third;
	second->data=55;
	second->prev=first;
	second->next=third;
	third->data=99;
	third->next=first;
	third->prev=second;
	
	struct node *p=first;
	do{
		printf("%d ",p->data);
		p=p->next;
	}
	while(p!=first);
}
