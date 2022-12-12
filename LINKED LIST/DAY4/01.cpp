#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertbegin(Node *&head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertend(Node *&head, int value)
{
    Node *newNode = new Node();
    if (head == NULL)
    {
        head = newNode;
        head->data = value;
        head->next = NULL;
        return;
    }
    Node *check = head;
    while (check->next != NULL)
    {
        check = check->next;
    }
    check->next = newNode;
    newNode->data = value;
    newNode->next = NULL;
}

void afterindex(Node *&head, int index, int value)
{
    Node *newNode = new Node();
    Node *check = head;
    int i = 0;
    while (i != index)
    {
        check = check->next;
        i++;
    }
    check->next = newNode->next;
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
    Node *head = NULL;
    insertend(head, 1);
    insertend(head, 2);
    insertend(head, 3);
    insertend(head, 4);
    afterindex(head, 2, 7);
    display(head);
    return 0;
}