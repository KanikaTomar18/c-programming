#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("\n Elements:%d", ptr->data);
        ptr = ptr->next;
    }
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

    printf("\n Enter elemets to add in list:\n");
    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = fourth;

    scanf("%d", &fourth->data);
    fourth->next = NULL;

    printf("\n Elements before insertion \n");
    linkedlisttraversal(head);

    int choice, index, data;

    printf("\n 1. Insertion At the Beginning...");
    printf("\n 2. Insertion in Between or at a specific Index...");
    printf("\n 3. Insertion At the End...");
    printf("\n 4. Insertion After a specific Node...");
    printf("\n 5. Display All Elements...");
    printf("\n 6. Exit...");
    printf("\n Enter your Choice:");
    scanf("%d", &choice);

    struct Node *ptr;
    struct Node *p;
    struct Node *prevnode;

    switch (choice)
    {
    case 1:
        printf("\n Enter element to add in the folllowing linkedlist : ");
        scanf("%d", &data);
        ptr = (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = head;
        head  = ptr;
        break;
    case 2:
        printf("\n Enter element to add in the following linkedlist : ");
        scanf("%d", &data);
        printf("\n Enter Index at which you want to insert a new node : ");
        scanf("%d", &index);
        ptr = (struct Node *)malloc(sizeof(struct Node));
        p = head;
        int i = 0;
        while (i != index - 1)
        {
            p = p->next;
            i++;
        }
        ptr->next = p->next;
        p->next = ptr;
        ptr->data = data;
        head = ptr;
        break;
    case 3:
        printf("\n Enter element to add in the following linkedlist : ");
        scanf("%d", &data);
        ptr = (struct Node *)malloc(sizeof(struct Node));
        p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = ptr;
        ptr->next = NULL;
        ptr->data = data;
        head = ptr;
        break;
    case 4:
        printf("\n Enter element to add in the following linkedlist : ");
        scanf("%d", &data);
        ptr = (struct Node *)malloc(sizeof(struct Node));
        prevnode =  (struct Node *)malloc(sizeof(struct Node));
        ptr->data = data;
        ptr->next = prevnode->next;
        prevnode->next = ptr;
        head = ptr;
        break;
    case 5:
        printf("\n ....Linked List after Insertion....");
        linkedlisttraversal(head);
        break;
    default:
        printf("\n Invalid Choice..");
        break;
    }
    linkedlisttraversal(head);
    return 0;
}
