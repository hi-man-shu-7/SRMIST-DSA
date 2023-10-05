#ifndef STACK_H
#define STACK_H

struct Stack;

struct Stack* createStack();
void push(struct Stack* stack, char item);
char pop(struct Stack* stack);
char peek(struct Stack* stack);
int isEmpty(struct Stack* stack);
int isOperator(char c);
int precedence(char op);

#endif