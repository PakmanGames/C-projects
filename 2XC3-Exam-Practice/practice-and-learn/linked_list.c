#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Node {
    int value; // data
    struct Node *next; // address of next node
};

bool is_empty(struct Node *head) {
    return head == NULL;
}

// adds new data to head of list returns pointer
struct Node *prepend(struct Node *head, int value) {
    struct Node *newnode = malloc(sizeof(struct Node));
    if (newnode == NULL) {
        exit(EXIT_FAILURE);
    }

    newnode->value = value;
    newnode->next = head;

    return newnode;
}

int find_value(struct Node *head, int value) {
    struct Node *p = head;
    while (p != NULL) {
        if (p->value == value) {
            return p->value;
        }
        p = p->next;
    }
    return 0;
}

// adds new node to end of list returns head of original list
struct Node *append(struct Node*head, int value) {
    struct Node *newnode = malloc(sizeof(struct Node));
    if (newnode == NULL) {
        exit(EXIT_FAILURE);
    }

    newnode->value = value;
    newnode->next = NULL;

    if (head == NULL) {
        return newnode;
    }

    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newnode;
    return head;
}

struct Node *reverse(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {

    return EXIT_SUCCESS;
}