#include<stdio.h>
struct rectangle{
	int length;
	int breadth;
};
void add(struct rectangle r)
{
	r.breadth=10;
	r.length=20;
	printf("%d,%d",r.length,r.breadth);
}
int main()
{
	struct rectangle r;
	struct rectangle *p=&r;
	add(r);
	p->length=10;
	p->breadth=40;
	printf("\n");
	printf("%d,%d",p->length,p->breadth);
	
	
}
