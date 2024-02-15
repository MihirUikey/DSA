#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
} *newnode, *front=0, *rear=0, *temp;

void enqueue(int x) {
    newnode = (struct node*)malloc(sizeof(struct node*));
    newnode->data = x;
    newnode->next = NULL;
    if (front == 0 && rear == 0)
        front = rear = newnode;
    else {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue() {
    temp = front;
    printf("\nDeleted data is: %d\n", temp->data);
    front = front->next;
    free(temp);
}

void display() {
    temp = front;
    printf("\nQueue: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void peek() {
    printf("\nElement at the Front of the Queue is: %d\n", front->data);
}

void main() {
    int choice, n;
    while (1) {
        printf("\n1) Enqueue 2) Dequeue 3) Peek 4) Display 5) Exit\n\nInput your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nInput data to be Enqueued: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default:
                printf("\nEnter a valid option!!!!!\n");
        }
    }
}
