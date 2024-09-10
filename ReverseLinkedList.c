#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = (*head);
    (*head) = newNode;
}

void printReverse(struct Node* head) {
    if (head == NULL)
        return;

    printReverse(head->next);
    printf("%d ", head->data);
}

int main() {
    struct Node* head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);

    printf("Reversed linked list: ");
    printReverse(head);
    printf("\n");

    return 0;
}

