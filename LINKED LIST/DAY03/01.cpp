#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertbegin(Node *&head, int value)
{
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void insertend(Node *&head, int value)
{
    Node *newnode = new Node();
    if (head == NULL)
    {
        head = newnode;
        head->data = value;
        head->next = NULL;
        return;
    }

    Node *check = head;
    while (check->next != NULL)
    {
        check = check->next;
    }
    check->next = newnode;
    newnode->data = value;
    newnode->next = NULL;
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
    Node *head = NULL;
    /* insertbegin(head, 1);
    insertbegin(head, 2);
    insertbegin(head, 3);
    insertbegin(head, 4); */
    insertend(head, 5);
    insertend(head, 6);
    insertend(head, 7);
    display(head);
    return 0;
}