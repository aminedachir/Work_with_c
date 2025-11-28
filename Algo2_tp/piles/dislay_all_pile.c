#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node* push(Node *lfo9, int value){
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->next = lfo9;
    return n;
}

Node *pop(Node *lfo9) {
    if (lfo9 == NULL) {
        printf("stack is empty\n");
        return NULL;
    }
    Node *next = lfo9->next;
    printf("Popped : %d\n",lfo9->value);
    free(lfo9);
    return next;
}

void peek (Node *lfo9) {
    if (lfo9 == NULL) {printf("stack is empty\n");}
    else printf("Top : %d\n", lfo9->value);
}

void display(Node *lfo9) {
    if (lfo9 == NULL) {
        printf("stack is empty\n");
        return;
    }
    printf("Stack elements (top → bottom):\n");
    for (Node *cur = lfo9;cur != NULL;cur = cur->next) {
        printf("--->%d", cur->value);
    }
    printf("\n");
}


int main () {
    Node *stack = NULL;

    stack = push(stack,10);
    stack = push(stack,20);
    stack = push(stack,30);
    stack = push(stack,40);
    stack = push(stack,50);

    display(stack);
}