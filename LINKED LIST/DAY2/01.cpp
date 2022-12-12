#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertEnd(Node **head, int value)
{
    Node *ptr = new Node();
    // struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (*head == NULL)
    {
        *head = ptr;
        (*head)->data = value;
        (*head)->next = NULL;
        return;
    }
    Node *check = *head;
    while (check->next != NULL)
    {
        check = check->next;
    }
    check->next = ptr;
    ptr->data = value;
    ptr->next = NULL;
}

void insertbegin(Node **head, int value)
{
    Node *NewNode = new Node();
    /* if (*head == NULL)
    {

        *head = NewNode;
        (*head)->data = value;
        (*head)->next = NULL;
    } */
    // Node **check = head;
    NewNode->next = *head;
    NewNode->data = value;
    *head = NewNode;
}
void insertindex(Node **head, int index, int value)
{
    Node *newNode = new Node();
    Node *check = *head;
    int i = 0;
    while (i != index - 1)
    {
        check = check->next;
        i++;
    }
    newNode->next = check->next;
    check->next = newNode;
    newNode->data = value;
}
void display(Node *head)
{
    Node *check = head;
    while (check != NULL)
    {
        cout << check->data << "->";
        check = check->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    struct Node *head = NULL;
    // insertbegin(&head, 0);
    insertEnd(&head, 6);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    // insertindex(&head, 2, 5);
    display(head);

    return 0;
}