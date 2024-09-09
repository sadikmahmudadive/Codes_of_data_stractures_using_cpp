#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    struct node* next;
};

int size= 0;

node* getnode(int ddata)
{
    node* newnode = new node();
    newnode -> data = ddata;
    newnode -> next = NULL;
    return newnode;
}

void insertPosition(node** current, int pos, int data)
{
    if (pos < 1 || pos > size + 1)
    {
        cout << "Invalide position!" <<endl;
    }
    else
    {
        while (pos--)
        {
            if (pos == 0)
            {
                node* temp = getnode(data);
                temp -> next = *current;
                *current = temp;
            }
            else
            current= &(*current)->next;
        }
        size++;
    }
}

void printList(struct node* head)
{
    while (head != NULL) 
    {
        cout << " " << head->data;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node* head = NULL;
    head = getnode(3);
    head->next = getnode(5);
    head->next->next = getnode(8);
    head->next->next->next = getnode(10);
    size = 4;

    cout << "Linked list before insertion: ";
    printList(head);

    int data = 12, pos = 3;
    insertPosition(&head, pos, data);
    cout << "Linked list after insertion of 12 at position 3: ";
    printList(head);

    data = 1, pos = 1;
    insertPosition(&head, pos, data);
    cout << "Linked list after insertion of 1 at position 1: ";
    printList(head);

    data = 15, pos = 7;
    insertPosition(&head, pos, data);
    cout << "Linked list after insertion of 15 at position 7: ";
    printList(head);
  
    return 0;
}