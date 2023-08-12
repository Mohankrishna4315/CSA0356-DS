#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define the stack structure
struct Stack {
    int data[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow: Cannot push %d\n", value);
        return;
    }
    stack->data[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow: Cannot pop\n");
        return -1;
    }
    return stack->data[stack->top--];
}

// Function to peek at the top element of the stack
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

