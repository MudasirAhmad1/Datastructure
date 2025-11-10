#include<stdio.h>
#include<conio.h>
struct rectangle{
	int length;
	int breadth;
};
int main()
{
struct rectangle r1={1,2};
r1.breadth=99;
printf("%d",r1.breadth);
}
