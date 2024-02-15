#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *newnode, *head, *temp;

void main()
{
    int flag = 1;
    head = temp = NULL;

    while (flag)
    {
        newnode = (struct node *)malloc(sizeof(struct node *));
        printf("\nEnter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }

        printf("\nEnter 1 to continue the program Or 0 to stop: ");
        scanf("%d", &flag);
    }

    temp->next = head;
    temp = head;
    printf("\nLinked list: ");
    while (temp)
    {
        printf(" %d", temp->data);
        temp = temp->next;
        if (temp == head)
            break;
    }
    printf("\n");
}
