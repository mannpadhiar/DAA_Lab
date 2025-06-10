#include <stdio.h>
#include <stdlib.h>

#define SIZE 100
int top = -1;
int arr[SIZE];

void push(int num) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow");
        return;
    }
    arr[++top] = num;
    printf("Element %d is added to the stack", num);
}

int pop() {
    if (top < 0) {
        printf("Stack is empty");
        return -1;
    }
    return arr[top--];
}

int peek() {
    if (top < 0) {
        printf("Stack is empty");
        return -1;
    }
    return arr[top];
}

void change(int pos, int value) {
    if (pos < 1 || pos > top + 1) {
        printf("Enter valid position");
        return;
    }
    arr[top - pos + 1] = value;
    printf("Element at position %d is changed to %d\n", pos, value);
}

void display() {
    if (top < 0) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int a;
    int temp;
    int index;

    while (1) {
        printf("\nEnter your choice:\n");
        printf("1 - Push\n2 - Pop\n3 - Peek\n4 - Change\n5 - Display\n-1 - Terminate\n");
        scanf("%d", &a);

        switch (a) {
            case -1:
                exit(0);
                break;
            case 1:
                printf("Enter your number to push: ");
                scanf("%d", &temp);
                push(temp);
                break;
            case 2:
                temp = pop();
                if (temp != -1)
                    printf("%d is popped\n", temp);
                break;
            case 3:
                temp = peek();
                if (temp != -1)
                    printf("%d is at top of stack\n", temp);
                break;
            case 4:
                printf("Enter the new value: ");
                scanf("%d", &temp);
                printf("Enter the position :");
                scanf("%d", &index);
                change(index, temp);
                break;
            case 5:
                display();
                break;
            default:
                printf("Enter a valid choice\n");
                break;
        }
    }

    return 0;
}
