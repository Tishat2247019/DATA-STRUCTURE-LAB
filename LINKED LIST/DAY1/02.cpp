#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    struct Node *next;
};

void printlinkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

struct Node *insertatbegin(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        ptr = head;
        // return ptr;
    }
    ptr->data = value;
    ptr->next = head;
    return ptr;
}

struct Node *insertatindex(struct Node *head, int value, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
    }
    ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertatend(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    if (head == NULL)
    {
        ptr = head;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;
    // return head;
}

struct Node *insertafternode(struct Node *head, struct Node *prvnode, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = prvnode->next;
    prvnode->next = ptr;
    return head;
}

int main()
{ /*
     struct Node *head;
     struct Node *second;
     struct Node *third;
     head = (struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));

     head->data = 2;
     head->next = second;

     second->data = 3;
     second->next = third;
     third->data = 5;
     third->next = NULL; */

    // printlinkedlist(head);

    // head = insertatbegin(head, 1);
    /* head = insertatend(head, 3);
    head = insertatend(head, 4);
    head = insertatend(head, 5); */
    struct Node *head = NULL;

    printlinkedlist(head);
    // head = insertafternode(head, second, 4);
    insertatbegin(head, 1);
    insertatbegin(head, 2);

    printlinkedlist(head);

    return 0;
}