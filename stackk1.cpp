#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

// PUSH FUNCTION
void push(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("\nMemory allocation failed!");
        return;
    }
    newnode->data = value;
    newnode->next = top; // new node points to previous top
    top = newnode;        // update top
    printf("\nThe number has been pushed: %d", value);
}

// POP FUNCTION
void pop() {
    if (top == NULL) {
        printf("\nStack Underflow! (No elements to pop)");
        return;
    }

    struct node *temp = top;
    printf("\nThe element popped is: %d", top->data);
    top = top->next; // move top to next node
    free(temp);      // free memory of removed node
}

// PEEK FUNCTION
void peek() {
    if (top == NULL) {
        printf("\nThe stack is empty.");
    } else {
        printf("\nThe top element is: %d", top->data);
    }
}

// DISPLAY FUNCTION
void display() {
    struct node *p = top;
    if (p == NULL) { // ?? you used "=" instead of "=="
        printf("\nStack is empty.");
        return;
    }

    printf("\nStack elements are:\n");
    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n"); // shows end of stack
}

// MAIN FUNCTION
int main() {
    push(34);
    push(12);
    push(56);
    pop();
    peek();
    display();
    return 0;
}

