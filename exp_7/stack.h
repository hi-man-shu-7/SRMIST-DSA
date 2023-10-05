#ifndef STACK_H
#define STACK_H


#define MAX_SIZE 100


struct Node {
    int data;
    struct Node* next;
};

typedef struct {
    struct Node* top; 
} Stack;


Stack* createStack();


void push(Stack* stack, int value);


int pop(Stack* stack);


int peek(Stack* stack);


int isEmpty(Stack* stack);


int isFull(Stack* stack);

/
void destroyStack(Stack* stack);

#endif