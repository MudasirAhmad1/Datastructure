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
	printf("\n %d%d",p->length,p->breadth);
}
int sub(struct area *b)
{
	return(b->length*b->breadth);
}
int main()
{
	struct area a={12,56};
	int result;
	add(&a);
	result=sub(&a);
	printf("\n");
	printf("The Result is : %d\t",result);
	printf("Hello world");
}
