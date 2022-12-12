#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << "->";
    preorder(node->left);
    preorder(node->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    /*     1
          / \
         12  9
        /  \
       5    6 */

    cout << "Preorder Traversal :";
    preorder(root);

    return 0;
}