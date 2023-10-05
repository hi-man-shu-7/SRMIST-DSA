#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}
void push(Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Error: Stack is empty.\n");
        exit(1);
    }
    struct Node* temp = stack->top;
    int value = temp->data;
    stack->top = temp->next;
    free(temp);
    return value;
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Error: Stack is empty.\n");
        exit(1);
    }
    return stack->top->data;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

void destroyStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}