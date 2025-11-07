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

int main() {
    push("Muzamil");
    push("Mudasir");
    pop();
    pop();
    pop(); // test empty
    return 0;
}

