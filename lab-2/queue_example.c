#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int front = -1;
int rare = -1;

int arr[SIZE];

int enqueue(int num){
    if(front == -1){
        front = 0;
    }
    if(rare >= SIZE){
        printf("Queue overloaded");
    }
    arr[++rare] = num;
}

int dequeue(){
    if(front == -1 || front > rare){
        printf("Your List is empty");
    }
    return arr[front++];
}

void display(){
    printf("Stack elements:\n");
    for (int i = front; i <= rare; i++) {
        printf("%d\n", arr[i]);
    }
}

void main(){
    int temp;
    int t;
    int a;
    while(1){
        printf("Enter your choice:\n");
        printf("1 - enqueue\n2 - dequeue\n3 - Display\n-1 - Terminate\n");
        scanf("%d", &a);

        switch (a) {
        case -1:
                exit(0);
                break;
            case 1:
                printf("Enter your number to add: ");
                scanf("%d", &temp);
                enqueue(temp);
                break;
            case 2:
                t = dequeue();
                printf("%d",t);
                break;
            case 3 :
                display();
                break;
        }
    }
}