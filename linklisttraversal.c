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

    printf("\nEnter head element = ");
    scanf("%d", &head->data);
    head->next = second;

    printf("Enter second element = ");
    scanf("%d", &second->data);
    second->next = third;

    printf("Enter third element = ");
    scanf("%d", &third->data);
    third->next = fourth;

    printf("Enter fourth element = ");
    scanf("%d", &fourth->data);
    fourth->next = NULL;

    linkedlisttraversal(head);
    return 0;
}
