#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBst(Node* root, int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val < root->data)
    {
        root->left = insertBst(root->left, val);
    }
    else
    {
        root->right = insertBst(root->right, val);
    }
    return root;
}

void inOrder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << "  ";
    inOrder(root->right);
}

void preOrder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }
    
    cout << root->data <<"  ";
    preOrder(root->left);
    preOrder(root->right); 
}

void postOrder(struct Node* root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << "  ";
}

int main()
{
    Node *root = NULL;
    root = insertBst(root, 5);
    insertBst(root, 1);
    insertBst(root, 3);
    insertBst(root, 4);
    insertBst(root, 2);
    insertBst(root, 7);

    cout << "In-order: ";
    inOrder(root);
    cout << "Pre-order: ";
    preOrder(root);
    cout << "Post-order: ";
    postOrder(root);
 
}