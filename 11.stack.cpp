#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100


struct Stack {
    int data[MAX_SIZE];
    int top;
};


void initialize(struct Stack* stack) {
    stack->top = -1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}


int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}


void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow: Cannot push %d\n", value);
        return;
    }
    stack->data[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}


int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow: Cannot pop\n");
        return -1;
    }
    return stack->data[stack->top--];
}


int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty: Cannot peek\n");
        return -1;
    }
    return stack->data[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));
    printf("Popped: %d\n", pop(&stack));

    return 0;
}

