#include "stack.h"
#include <stdlib.h>
#include <string.h>

Stack *createStack(int capacity, int elementSize) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    if (!stack) {
        return NULL;  // Memory allocation failed
    }

    stack->data = (void **)malloc(sizeof(void *) * capacity);
    if (!stack->data) {
        free(stack);
        return NULL;  // Memory allocation failed
    }

    stack->size = 0;
    stack->capacity = capacity;
    stack->elementSize = elementSize;

    return stack;
}

bool push(Stack *stack, void *element) {
    if (isFull(stack)) {
        return false;  // Stack is full
    }

    stack->data[stack->size] = malloc(stack->elementSize);
    if (!stack->data[stack->size]) {
        return false;  // Memory allocation failed
    }

    memcpy(stack->data[stack->size], element, stack->elementSize);
    stack->size++;

    return true;
}

bool pop(Stack *stack, void *element) {
    if (isEmpty(stack)) {
        return false;  // Stack is empty
    }

    stack->size--;
    memcpy(element, stack->data[stack->size], stack->elementSize);
    free(stack->data[stack->size]);

    return true;
}

bool isEmpty(Stack *stack) {
    return stack->size == 0;
}

bool isFull(Stack *stack) {
    return stack->size == stack->capacity;
}

int getSize(Stack *stack) {
    return stack->size;
}

void destroyStack(Stack *stack) {
    for (int i = 0; i < stack->size; i++) {
        free(stack->data[i]);
    }
    free(stack->data);
    free(stack);
}
