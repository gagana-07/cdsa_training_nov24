// Create a dynamic array of type int enQueue - push,deQueue - pop, display() 1st ele to last, isEmpty(), isEfull()


#include <stdio.h>
#include <stdlib.h>
#define INITIAL_CAPACITY 4
typedef struct {
    int *queue;       
    int capacity;     
    int front;        
    int rear;         
} DynamicQueue;
void initQueue(DynamicQueue *q) {
    q->capacity = INITIAL_CAPACITY;
    q->queue = (int*)malloc(q->capacity * sizeof(int));
    q->front = 0;
    q->rear = 0;
}
int isEmpty(DynamicQueue *q) {
    return q->front == q->rear;
}
int isFull(DynamicQueue *q) {
    return q->rear == q->capacity;
}
void resizeQueue(DynamicQueue *q) {
    q->capacity *= 2;
    q->queue = (int*)realloc(q->queue, q->capacity * sizeof(int));
}
void enQueue(DynamicQueue *q, int value) {
    if (isFull(q)) {
        resizeQueue(q);
    }
    q->queue[q->rear] = value;
    q->rear++;
    printf("Enqueued %d\n", value);
}
int deQueue(DynamicQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return -1;
    }
    int value = q->queue[q->front];
    q->front++;
    if (q->front > 0 && q->front == q->rear) {
        q->front = 0;
        q->rear = 0;
    } else if (q->front > q->capacity / 4) {
        for (int i = q->front; i < q->rear; i++) {
            q->queue[i - q->front] = q->queue[i];
        }
        q->rear -= q->front;
        q->front = 0;
    }
    printf("Dequeued %d\n", value);
    return value;
    }
void display(DynamicQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i < q->rear; i++) {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}
int main() {
    DynamicQueue q;
    initQueue(&q);
    enQueue(&q, 10);
    enQueue(&q, 20);
    enQueue(&q, 30);
    enQueue(&q, 40);
    display(&q);
    deQueue(&q);
    display(&q);
    enQueue(&q, 50);
    enQueue(&q, 60);
    display(&q);
    free(q.queue);
    return 0;
}
