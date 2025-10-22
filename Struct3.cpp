#include<stdio.h>
#include<stdlib.h>

struct area{
	int length;
	int breadth;
};
int main()
{
	struct area a;
	struct area *p=&a;
	p = (struct area *)malloc(sizeof(struct area));
	p->length=10;
	p->breadth=22;
//	p = (struct area *)malloc(sizeof(struct area));
//	a.length=10;
//	a.breadth=20;
	printf("%d %d ",p->length,p->breadth);
	printf("%d %d ",a.length,a.breadth);
	
	printf("Hello world");
}
