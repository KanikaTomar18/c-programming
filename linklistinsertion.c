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
        printf("\n Element:%d", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertionAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *InsertionInBetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

struct Node *InsertionAtTheEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *InsertionAfterNode(struct Node *head, struct Node *prevnode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
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

    printf("\n Enter Elements to add in list:\n");
    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = fourth;

    scanf("%d", &fourth->data);
    fourth->next = NULL;

    printf("\n Elements before insertion:\n");
    linkedlisttraversal(head);

    int a, b, c, d;
    printf("\n Enter element to insert at beginning:");
    scanf("%d", &a);

    head = InsertionAtBeginning(head, a);
    printf("\n Elements after insertion at Beginning:\n");
    linkedlisttraversal(head);

    printf("\n Enter element to insert in between or at a particular index:");
    scanf("%d", &b);

    head = InsertionInBetween(head, b, 2);
    printf("\n Elements after insertin in Between or at Index:\n");
    linkedlisttraversal(head);

    printf("\n Enter element to insert at the End:");
    scanf("%d", &c);

    head = InsertionAtTheEnd(head, c);
    printf("\n Elements after insertion at the End:\n");
    linkedlisttraversal(head);

    printf("\n Enter element to insert after a node:");
    scanf("%d", &d);

    head = InsertionAfterNode(head, third, d);
    printf("\n Elements after insertion After a Node:\n");
    linkedlisttraversal(head);

    return 0;
}