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
	printf("Enter the Number of Nodes:");
	scanf("%d",&n);
	struct node *head=NULL;
	struct node *last=NULL;
	for(int i=0;i<n;i++)
	{
	
