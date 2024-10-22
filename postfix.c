//2) Evaluate the Given Postfix Expression in C

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 1000

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int evaluatePostfix(char* exp) {
    for (int i = 0; exp[i]; ++i) {
        if (isdigit(exp[i])) {
            push(exp[i] - '0');
        } else {
            int val1 = pop();
            int val2 = pop();
            switch (exp[i]) {
                case '+': push(val2 + val1); break;
                case '-': push(val2 - val1); break;
                case '*': push(val2 * val1); break;
                case '/': push(val2 / val1); break;
            }
        }
    }
    return pop();
}

int main() {
    char exp[] = "231*+9-";
    printf("Postfix evaluation: %d\n", evaluatePostfix(exp));
    return 0;
}
