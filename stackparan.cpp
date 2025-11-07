#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[30];
    struct node *next;
};

struct node *top = NULL;

void push(char value[]) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    strcpy(newnode->data, value);
    newnode->next = top;
    top = newnode;

    printf("\n'%s' is pushed onto the stack", value);
}

void pop() {
    if (top == NULL) {
        printf("\nThe Stack is Empty");
    } else {
        struct node *temp = top;
        printf("\n'%s' is popped from the stack", top->data);
        top = top->next;
        free(temp);
    }
}
int isbalanced(value[])
{
	for(i=0;value[i]!='\0';i++)
	{
		if(value[i]=='(')
		{
			push(value[i]);
		}
		elseif(value[i]==')')
		{
			if(top==NULL)
			return 0;
			pop();
		}
	}
}
if(top==NULL)
return 1;
else
return 0;
int main() {
    char name[23]="((a+b)*(c+b))";
    printf("d",isbalanced(name));
    return 0;
}

