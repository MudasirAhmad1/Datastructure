#include <stdio.h>
#include <stdlib.h>

// Node definition: one node contains an int and pointer to next node.
struct Node {
    int data;
    struct Node* next;
};

// top pointer: points to the top node of the stack (head of list).
struct Node* top = NULL;

// Create a new node with given value and push it to stack
void push(int value) {
    // 1. allocate memory for new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) { // check for malloc failure
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    // 2. set node data
    newNode->data = value;
    // 3. point new node's next to current top (could be NULL)
    newNode->next = top;
    // 4. update top to new node
    top = newNode;
    printf("%d pushed to stack\n", value);
}

// Remove top element and return it. Caller must be ready for special value or check isEmpty first.
int pop() {
    if (top == NULL) { // stack empty
        fprintf(stderr, "Stack underflow: cannot pop from empty stack\n");
        return -1; // sentinel — real code might use error codes or pointers
    }
    struct Node* temp = top;   // save current top
    int poppedValue = temp->data;
    top = top->next;           // move top to next node
    free(temp);                // free memory of old top
    return poppedValue;
}

int peek() {
    if (top == NULL) {
        fprintf(stderr, "Stack is empty: nothing to peek\n");
        return -1;
    }
    return top->data;
}

int isEmpty() {
    return top == NULL;
}

void display() {
    if (top == NULL) {
        printf("Stack is Empty!\n");
        return;
    }
    struct Node* current = top;
    printf("Stack (top -> bottom): ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Simple test
int main() {
    push(10);
    push(20);
    push(30);
    display();               // should print: 30 20 10
    printf("Peek: %d\n", peek()); // 30
    printf("Popped: %d\n", pop()); // pops 30
    display();               // should print: 20 10
    while (!isEmpty()) {
        printf("Popped: %d\n", pop());
    }
    display();               // empty
    return 0;
}

