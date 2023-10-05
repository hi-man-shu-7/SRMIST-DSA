#include <stdio.h>
#include "queue.h"

int main() {
    // Create a queue of integers
    Queue *intQueue = createQueue(10);

    // Enqueue some integers into the queue
    int x = 50, y = 90, z = 15;
    enqueue(intQueue, &x);
    enqueue(intQueue, &y);
    enqueue(intQueue, &z);

    // Dequeue elements from the queue and print them
    while (!isEmpty(intQueue)) {
        int *element = (int *)dequeue(intQueue);
        if (element) {
            printf("%d ", *element);
        }
    }
    printf("\n");

    // Destroy the queue
    destroyQueue(intQueue);

    return 0;
}
