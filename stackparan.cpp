#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

struct node *top = NULL;

void push(char value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1); // Stop in case of serious error
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop() {
    if (top == NULL) {
        // Nothing to pop
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
}

void clear_stack() {
    while (top != NULL) {
        pop();
    }
}

// Returns 1 if balanced, 0 otherwise
int balance(char *exp) {
    int i;
    for (i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')') {
            if (top == NULL) {
                clear_stack(); // To avoid memory leak
                return 0;
            } else
                pop();
        }
    }
    int is_balanced = (top == NULL);
    clear_stack();
    return is_balanced;
}

int main() {
    char *exp = "((a+b)*(c+d))";
    if (balance(exp)) {
        printf("\nThe expression is balanced\n");
    } else {
        printf("\nThe expression is NOT balanced\n");
    }
    return 0;
}

