#include<stdio.h>
struct rectange{
	int length;
	int breadth;
};
void add(struct rectange r)
{
	r.length=10;
	r.breadth=30;
	printf("%d%d",r.length,r.breadth);
}
int main()
{
	struct rectange r;
	add(r);
}
