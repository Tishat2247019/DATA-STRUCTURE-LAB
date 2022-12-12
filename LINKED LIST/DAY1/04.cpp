#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertlist(int value)
{
    Node *head;
    Node *temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *chek = head;
    while (chek->next != NULL)
    {
        chek = chek->next;
    }
    chek->next = temp;
    // temp->next = NULL;
}

void printlist()

{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertlist(1);
    insertlist(2);
    insertlist(3);
    printlist();
    return 0;
}