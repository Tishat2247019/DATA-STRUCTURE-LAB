#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertatbegin(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void print(Node *head)
{
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL" << endl;
    }
}

int main()
{
    Node *head = NULL;
    insertatbegin(&head, 5);
    insertatbegin(&head, 4);
    insertatbegin(&head, 3);
    insertatbegin(&head, 2);
    insertatbegin(&head, 1);
    print(head);

    return 0;
}