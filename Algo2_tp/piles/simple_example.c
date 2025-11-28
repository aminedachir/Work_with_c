#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node* push(Node *top, int value) {
    Node *n = malloc(sizeof(Node));
    n->value = value;
    n->next = top;
    return n;
}

Node* pop(Node *top) {
    if (top == NULL) {
        printf("stack is empty\n");
        return NULL;
    }
    Node *next = top->next;
    printf("Popped : %d\n",top->value);
    free(top);
    return next;
}

void peek (Node *top) {
    if (top == NULL) {printf("stack is empty\n");}
    else printf("Top : %d\n", top->value);
}

int main () {
    Node *amine = NULL;
    
    amine = push(amine,10);
    amine = push(amine,20);
    amine = push(amine,30);

    peek(amine);

    amine = pop(amine);
    peek(amine);

    amine = pop(amine);
    peek(amine);

    amine = pop(amine);
    peek(amine);

    // amine = pop(amine);
    return 0;
}