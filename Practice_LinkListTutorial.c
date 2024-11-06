// traversal of linkedlist
//  #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("\n Elements:%d", ptr->data);
//         ptr = ptr->next;
//     }
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     printf("\nEnter head element = ");
//     scanf("%d", &head->data);
//     head->next = second;

//     printf("Enter second element = ");
//     scanf("%d", &second->data);
//     second->next = third;

//     printf("Enter third element = ");
//     scanf("%d", &third->data);
//     third->next = fourth;

//     printf("Enter fourth element = ");
//     scanf("%d", &fourth->data);
//     fourth->next = NULL;

//     traversal(head);
//     return 0;
// }

// insertion of linked list

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void traverse(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("\n Elements:%d", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *InsertionAtFirst(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = head;
//     return ptr;
// }

// struct Node *InsertionAtBetweenIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->next = p->next;
//     p->next = ptr;
//     ptr->data = data;
//     return head;
// }

// struct Node *InsertAtTheEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// struct Node *InsertAfterANode(struct Node *head, struct Node *prevnode, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = prevnode->next;
//     prevnode->next = ptr;
//     return head;
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     printf("\nEnter element to add in list =\n");
//     scanf("%d", &head->data);
//     head->next = second;

//     scanf("%d", &second->data);
//     second->next = third;

//     scanf("%d", &third->data);
//     third->next = fourth;

//     scanf("%d", &fourth->data);
//     fourth->next = NULL;

//     printf("\nLinked List Before Insertion");
//     traverse(head);

//     long int a, b, c, in, d;
//     printf("\nEnter the element to add in the beginning =");
//     scanf("%ld", &a);

//     head = InsertionAtFirst(head, a);
//     printf("\nLinked List After Insertion at Beginning\n");
//     traverse(head);

//     printf("\nEnter the element to add in between =");
//     scanf("%ld", &b);
//     printf("\nAt which index you want to insert %d = ", b);
//     scanf("%ld", &in);

//     head = InsertionAtBetweenIndex(head, b, in);
//     printf("\nLinked List After Insertion at Between or at a particular Index\n");
//     traverse(head);

//     printf("\nEnter the element to add at the end =");
//     scanf("%ld", &c);
//     head = InsertAtTheEnd(head, c);
//     printf("\nLinked List After Insertion at the End =");
//     traverse(head);

//     printf("\nEnter the element to add after a given node = ");
//     scanf("%d", &d);

//     head = InsertAfterANode(head, third , d);
//     printf("\nLinked List After Insertion at the given node = ");
//     traverse(head);

//     return 0;
// }

// deletion linked list

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

struct Node *Deletefirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeleteatIndex(struct Node *head, int index)
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

struct Node *DeleteLastElement(struct Node *head)
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

struct Node *DeleteByvalue(struct Node *head, int value)
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

    printf("\nEnter Elements to add in list = \n");
    scanf("%d", &head->data);
    head->next = second;

    scanf("%d", &second->data);
    second->next = third;

    scanf("%d", &third->data);
    third->next = fourth;

    scanf("%d", &fourth->data);
    fourth->next = NULL;

    printf("\nLinked List Before Deletion\n");
    linkedlisttraversal(head);

    // head = Deletefirst(head);
    // printf("\nLinked List After Deletion At First\n");
    // linkedlisttraversal(head);

    // head = DeleteatIndex(head, 2);
    // printf("\nLinked List After Deletion At Index\n");
    // linkedlisttraversal(head);

    // head = DeleteLastElement(head);
    // printf("\nLinked List After Deletion of last element\n");
    // linkedlisttraversal(head);

    head = DeleteByvalue(head,24);
    printf("\nLinked List After Deletion By key\n");
    linkedlisttraversal(head);

    return 0;
}