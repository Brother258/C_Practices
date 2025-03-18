#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;


void traverseLinkedList() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void push(int num) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;
    newnode->next = head;
    head = newnode;
}


void pop() {
    if (head == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

int main() {
    push(5);
    push(10);
    push(15);
    push(20);
    push(25);
    traverseLinkedList();

    pop();
    traverseLinkedList();

    return 0;
}
