// 1) Implement Stack using Arrays in C

#include <stdio.h>
#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = x;
        printf("%d pushed into stack\n", x);
    }
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        int x = stack[top--];
        return x;
    }
}

int isEmpty() {
    return top < 0;
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("%d popped from stack\n", pop());
    return 0;
}
