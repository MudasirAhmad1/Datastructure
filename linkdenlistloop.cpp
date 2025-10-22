#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int arr[] = {10, 20, 30};
    int n = 3;

    struct Node* head = NULL;
    struct Node* tail = NULL;

    // Build the list from array
    for (int i = 0; i < n; i++) {
        struct Node* newNode = malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // ? Add a new node with value 99 at the end
    struct Node* extraNode = malloc(sizeof(struct Node));
    extraNode->data = 99;
    extraNode->next = NULL;

    tail->next = extraNode;  // Link last node to new node
    tail = extraNode;        // Update tail

    // Print the updated list
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}

