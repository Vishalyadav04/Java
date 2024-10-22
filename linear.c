//3) Implement Linear Queue using Arrays in C

#include <stdio.h>
#define MAX 1000

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if (front == -1) front = 0;
        queue[++rear] = x;
        printf("%d enqueued to queue\n", x);
    }
}

int dequeue() {
    if (front > rear || front == -1) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int x = queue[front++];
        return x;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d dequeued from queue\n", dequeue());
    return 0;
}
