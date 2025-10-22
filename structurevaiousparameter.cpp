#include<stdio.h>
#include<stdlib.h>
struct rectangle{
	int length;
	int breadth;
};

void intial(struct rectangle *r1,int l,int b)
{
	r1->length=l;
	r1->breadth=b;
}
int area(struct rectangle *r1)
{
	return(r1->length*r1->breadth);
}
int main()
{
	struct rectangle r;
	intial(&r,10,5);
	printf("%d",area(&r));
}
