#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int length;
	int breadth;
};
void intial(struct node *p)
{
	p->length=4;
	p->breadth=3;
}
void swap(struct node n1)
{
	int temp;
	temp=n1.length*n1.breadth;
	printf("%d",temp);
}
int main()
{	
struct node n1;
intial(&n1);
swap(n1);


}
