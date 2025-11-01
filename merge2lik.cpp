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
	
	struct node *fourth=(struct node *)malloc(sizeof(struct node));
	struct node *fifth=(struct node *)malloc(sizeof(struct node));
	struct node *sixth=(struct node *)malloc(sizeof(struct node));
	fourth->data=22;
	fifth->data=33;
	sixth->data=99;
	fourth->next=fifth;
	fifth->next=sixth;
	sixth->next=fourth;
	fifth->prev=fourth;
	fourth->prev=sixth;
	
	third->next=fourth;
	fourth->prev=third;
	fifth->next=first;
	first->prev=fifth;
	
	int a[10];
	
	struct node *p=first;
	do{
			int i;
		printf("%d ",p->data);
			a[i]=p->data;
		p=p->next;
	
	
		i++;
	}while(p!=first);
	

	
//	struct node *q=fourth;
//	do{
//		printf("%d ",q->data);
//		q=q->next;
//	}while(q!=fourth);
}
