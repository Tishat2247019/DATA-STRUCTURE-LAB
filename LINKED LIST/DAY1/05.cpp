#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}
void insertend(int value)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
        head = ptr;
        head->data = value;
        head->next = NULL;

        return;
    }
    struct Node *check = head;
    while (check->next != NULL)
    {
        check = check->next;
    }
    check->next = ptr;
    ptr->data = value;
    ptr->next = NULL;
}
void display()
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    /* insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9); */
    insertend(11);
    insertend(12);
    insertend(13);
    insertend(14);
    cout << "The linked list is: ";
    display();
    return 0;
}