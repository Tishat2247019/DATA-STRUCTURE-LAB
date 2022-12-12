#include <iostream>
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
    ptr->next = head;
    ptr->data = value;
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
        i++;
    }
    ptr->next = p->next;
    ptr->data = value;
    p->next = ptr;
    return head;
}

struct Node *insertatend(struct Node *head, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = value;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node *insertafternode(struct Node *head, struct Node *prevnode, int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;
    ptr->next = prevnode->next;
    prevnode->next = ptr;
    return head;
}

int main()
{
    Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    printlinkedlist(head);
    // head = insertatbegin(head, 0);
    // head = insertatindex(head, 5, 1);
    head = insertafternode(head, second, 5);
    printlinkedlist(head);
    return 0;
}