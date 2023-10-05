#include "queue.h"
#include <stdlib.h>

Queue *createQueue(int capacity) {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    if (!queue) {
        return NULL;  // Memory allocation failed
    }

    queue->data = (void **)malloc(sizeof(void *) * capacity);
    if (!queue->data) {
        free(queue);
        return NULL;  // Memory allocation failed
    }

    queue->front = queue->rear = -1;
    queue->size = 0;
    queue->capacity = capacity;

    return queue;
}

bool isEmpty(Queue *queue) {
    return queue->size == 0;
}

bool isFull(Queue *queue) {
    return queue->size == queue->capacity;
}

bool enqueue(Queue *queue, void *element) {
    if (isFull(queue)) {
        return false;  // Queue is full
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->data[queue->rear] = element;
    queue->size++;

    return true;
}

void *dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        return NULL;  // Queue is empty
    }

    void *element = queue->data[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;

    return element;
}

void *front(Queue *queue) {
    if (isEmpty(queue)) {
        return NULL;  // Queue is empty
    }

    return queue->data[queue->front];
}

void *rear(Queue *queue) {
    if (isEmpty(queue)) {
        return NULL;  // Queue is empty
    }

    return queue->data[queue->rear];
}

void destroyQueue(Queue *queue) {
    free(queue->data);
    free(queue);
}
