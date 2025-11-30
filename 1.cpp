#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int length;
	int breadth;
};
void swap(struct node n1)
{
	int temp;
	temp=n1.length*n1.breadth;
	printf("%d",temp);
}
int main()
{	
struct node n1={10,5};
swap(n1);

}
