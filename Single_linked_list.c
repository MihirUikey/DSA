#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *newnode, *temp, *head;

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
            temp = newnode;
        }

        printf("\nEnter 1 to continue the program Or 0 to stop: ");
        scanf("%d", &flag);
    }

    temp = head;
    printf("\nliked list: ");
    while (temp)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
