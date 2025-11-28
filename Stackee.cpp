#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *top=NULL;
void push(char value)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp=top;
	top=top->next;
	free(temp);
}
void display()
{
	struct node *p=top;
	while(p!=NULL)
	{
		printf("\n The Data is : %d",p->data);
		p=p->next;
	}
}
int balance(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        char ch = exp[i];

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }

        // Closing brackets
        else if (ch == ')' || ch == '}' || ch == ']')
        {
        	pop();
//            char top = pop();
//
//            // Stack empty ? imbalance
//            if (top == '\0')
//                return 0;
//
//            // Mismatched brackets
//            if ((ch == ')' && top != '(') ||
//                (ch == '}' && top != '{') ||
//                (ch == ']' && top != '['))
//                return 0;
        }

        // Ignore all non-bracket characters
    }

    // If stack is empty ? balanced
    return 1;
}

int main()
{
//	push(45);
//	push(3);
//	push(2);
//	push(45);
//	push(3);
// 	pop();
	display();
	char *exp="(a+b))";
	if(balance(exp))
	{
		printf("The expression is not balanced");
	}
	else
	{
		printf(" balance:");
	}
}
