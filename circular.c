//4) Implement Circular Queue using Arrays in C

#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1))) {
        printf("Queue Overflow\n");
    } else if (front == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else if (rear == MAX - 1 && front != 0) {
        rear = 0;
        queue[rear] = x;
    } else {
        queue[++rear] = x;
    }
    printf("%d enqueued to queue\n", x);
}

int dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return -1;
    }
    int x = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
    return x;
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    } else {
        for (int i = front; i < MAX; i++) {
            printf("%d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
