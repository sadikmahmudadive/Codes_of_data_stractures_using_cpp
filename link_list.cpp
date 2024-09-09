#include<iostream>
#include<conio.h>

using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int value)
{
    node* n = new node(value);
    if (head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void deletion(node* &head, int val)
{
    node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}

bool search(node* head, int key)
{
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void display(node* head)
{
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<"NULL" <<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    cout << "The bese Link list:" << endl;
    display(head);
    insertAtHead(head, 4);
    cout << "The new Link list after insert an element at head:" << endl;
    display(head);
    cout << "If output show '1' then the given element is in the list or '0' then the given elements is not in the list: " << search(head,1) << endl;
    deletion(head, 3);
    cout << "The new Link list after delete an element at tail:" << endl;
    display(head);
    cout << "The new Link list after delete an element at head:" << endl;
    deleteAtHead(head);
    display(head);

    return 0;
    getch();
}