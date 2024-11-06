#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *head)
{
    struct Node *ptr = head;

    printf("\n Elements:%d", ptr->data);
    ptr = ptr->next;
    do
    {
        printf("\n Elements:%d", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter Elements to add in lsit =\n");
    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = fourth;

    scanf("%d", &fourth->data);
    fourth->next = head;

    linkedlisttraversal(head);
    return 0;
}
