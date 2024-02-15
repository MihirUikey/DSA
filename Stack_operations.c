#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *newnode, *top=NULL, *temp;

int n;

void push(int n) {
    newnode = (struct node*) malloc(sizeof(struct node*));
    newnode->data = n;
    newnode->next = top;
    top = newnode;
}

void display() {
    temp = top;
    if (top == NULL) {
        printf("\nStack is empty\n");
    } else {
        printf("\nStack: ");
        while (temp) {
            printf("\n [%d]", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void peek() {
    if (top == NULL)
        printf("\nStack is empty\n");
    else
        printf("\nTop most Element is: %d\n", top->data);
}

void pop() {
    temp = top;
    if (top == NULL)
        printf("\nStack is empty\n");
    else {
        printf("\nPopped value is %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

void main() {
    int choice;
    while (1) {
        printf("\n1) Push 2) Pop 3) Peek 4) Display 5) Exit\n\nInput your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nInput data to be pushed: ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
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
                printf("\nEnter a valid option!");
        }
    }
}
