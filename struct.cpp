#include<stdio.h>
int main()
{
	struct rectangle{
		int length;
		int breadth;
	};
	struct rectangle r;
	r.length=10;
	r.breadth=20;
	printf("/n %d%d",r.length,r.breadth);
}

