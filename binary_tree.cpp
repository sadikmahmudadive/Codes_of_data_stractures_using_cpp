#include<iostream>

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

int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << root->data << endl;
    cout << root->data << "  " << root->left->data << endl;
    cout << root->data << "  " << root->left->data << "  " <<root->right->data << endl;
    cout << root->data << "  " << root->left->data << "  " <<root->right->data  <<"  " << root->left->left->data << endl;
    cout << root->data << "  " << root->left->data << "  " <<root->right->data  <<"  " << root->left->right->data << endl;

    return 0;
}