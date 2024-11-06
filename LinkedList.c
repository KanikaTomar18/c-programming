#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("\nElements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *DeletionAtBegining(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
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

    head->data = 29;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 34;
    third->next = fourth;

    fourth->data = 68;
    fourth->next = NULL;

    printf("\nLinked List Before Insertion\n");
    linkedlisttraversal(head);

    head = InsertAtBeginning(head, 23);
    printf("\nLinked List After Insertion\n");
    linkedlisttraversal(head);

    head = DeletionAtBegining(head);
    printf("\nLinked List After Deletion\n");
    linkedlisttraversal(head);

    return 0;
}