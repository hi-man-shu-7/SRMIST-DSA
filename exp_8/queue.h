#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

// Define the queue structure
typedef struct {
    void **data;    // Array to store the elements
    int front, rear;
    int size;       // Current size of the queue
    int capacity;   // Maximum capacity of the queue
} Queue;

// Function to create a new queue
Queue *createQueue(int capacity);

// Function to check if the queue is empty
bool isEmpty(Queue *queue);

// Function to check if the queue is full
bool isFull(Queue *queue);

// Function to enqueue an element onto the queue
bool enqueue(Queue *queue, void *element);

// Function to dequeue an element from the queue
void *dequeue(Queue *queue);

// Function to get the front element of the queue
void *front(Queue *queue);

// Function to get the rear element of the queue
void *rear(Queue *queue);

// Function to destroy the queue and free memory
void destroyQueue(Queue *queue);

#endif /* QUEUE_H */
