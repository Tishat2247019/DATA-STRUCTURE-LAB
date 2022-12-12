#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class linkedlist
{
public:
    Node *head;

    linkedlist()
    {
        head = NULL;
    }

    void insertbegin(int value)
    {
        Node *newNode = new Node;
        newNode->next = head;
        newNode->data = value;
        head = newNode;
    }

    void insertend(int value)
    {
        Node *newNode = new Node;
        Node *check = head;
        while (check->next != NULL)
        {
            check = check->next;
        }
        newNode->data = value;
        check->next = newNode;
        newNode->next = nullptr;
    }

    void print()
    {
        Node *check = head;
        while (check != NULL)
        {
            cout << check->data << "->";
            check = check->next;
        }
        cout << "NULL";
    }
};

int main()
{
    linkedlist ll;
    ll.insertbegin(1);
    ll.insertbegin(2);
    ll.insertbegin(3);
    ll.insertend(11);
    ll.insertend(12);
    ll.insertend(13);
    ll.print();
    return 0;
}