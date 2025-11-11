#include<stdio.h>
struct cricle{
	int l=56;
	int b=78;
};
void change(struct cricle c2)
{
	c2.l=9;
	printf("\n The 2 cricle is %d %d",c2.l,c2.b);
}
int main()
{
	struct cricle c1;
	
	change(c1);
	printf("\n The cricle is : %d %d",c1.l,c1.b);
}
#include<stdio.h>
struct cricle{
	int l=56;
	int b=78;
};
void change(struct cricle c2)
{
	c2.l=9;
	printf("\n The 2 cricle is %d %d",c2.l,c2.b);
}
int main()
{
	struct cricle c1;
	
	change(c1);
	printf("\n The cricle is : %d %d",c1.l,c1.b);
}
