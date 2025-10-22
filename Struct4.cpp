#include<stdio.h>
#include<stdlib.h>
struct area{
	int length;
	int breadth;
};
void add(struct area *p){
	p = (struct area *)malloc(sizeof(struct area));
	p->length=34;
	p->breadth=22;
	printf("%d%d",p->length,p->breadth);
}
int main()
{
	struct area a;
	add(&a);
	printf("Hello world");
}
