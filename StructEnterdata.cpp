#include<stdio.h>
#include<stdlib.h>
struct rectangle{
	int length;
	int breadth;
};
int main(){
	struct rectangle *p;
	//p=(struct rectangle * )malloc((sizeof)struct rectangle);
	p = (struct rectangle *)malloc(sizeof(struct rectangle));
	printf("Enter a and b");
	scanf("%d",&p->length);
	printf("Enter a and b");
	scanf("%d",&p->breadth);	
//	p->length=10;
//	p->breadth=22;
	printf("%d%d",p->length,p->breadth);
}
