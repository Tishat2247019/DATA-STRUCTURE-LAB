#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    void printlinkedlist(Node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    Node n;
    Node *head;
    Node *first = NULL;
    Node *second = NULL;
    Node *third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 1;
    second->data = 2;
    third->data = 3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    head = first;
    /*  while (head != NULL)
     {
         cout << head->data << " ";
         head = head->next;
     } */
    n.printlinkedlist(head);

    return 0;
}