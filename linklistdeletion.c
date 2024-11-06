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
        printf("\n Elements:%d", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *DeletingTHeFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeletingTheNodeFromIndexorBetween(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *DeletingThelastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node *DeletingTheNodebytheValueorKey(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("\n There is no such a value!");
    }
    return head;
}

int main()
{
    int x;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = fourth;

    scanf("%d", &fourth->data);
    fourth->next = NULL;

    printf("\n Linked List Before Deletion\n");
    linkedlisttraversal(head);

    // head = DeletingTHeFirstNode(head);
    // printf("\n After deleting the first Node\n");
    // linkedlisttraversal(head);

    // head = DeletingTheNodeFromIndexorBetween(head, 3);
    // printf("\n After deleting the first Node\n");
    // linkedlisttraversal(head);

    // head = DeletingThelastNode(head);
    // printf("\n After deleting the last node\n");
    // linkedlisttraversal(head);

    printf("\n Enter the value you want to remove:");
    scanf("%d", &x);
    head = DeletingTheNodebytheValueorKey(head, x);
    printf("\n After deleting the node by value or key\n");
    linkedlisttraversal(head);
    return 0;
}