#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

// Define the stack structure
typedef struct {
    void **data;    // Array to store the elements
    int size;       // Current size of the stack
    int capacity;   // Maximum capacity of the stack
    int elementSize; // Size of each element in bytes
} Stack;

// Function to create a new stack
Stack *createStack(int capacity, int elementSize);

// Function to push an element onto the stack
bool push(Stack *stack, void *element);

// Function to pop an element from the stack
bool pop(Stack *stack, void *element);

// Function to check if the stack is empty
bool isEmpty(Stack *stack);

// Function to check if the stack is full
bool isFull(Stack *stack);

// Function to get the size of the stack
int getSize(Stack *stack);

// Function to destroy the stack and free memory
void destroyStack(Stack *stack);

#endif /* STACK_H */
