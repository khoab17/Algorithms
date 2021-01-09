#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
};

void push(Node** head,int data)
{
    Node* new_node=new Node();

    new_node->data=data;
    new_node->next=(*head);
    (*head)=new_node;

}

void insertAfter(Node* prev_node, int data)
{
    if(prev_node==NULL)
    {
        cout<<"Previous Node can't be Null.";
    }

    Node* new_node=new Node();
    new_node->data=data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}

void append(Node** head,int data)
{
    Node* new_node=new Node();
    Node* last=*head;

    new_node->data=data;
    new_node->next=NULL;
    if(*head == NULL)
    {
        *head=new_node;
        return;
    }

    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
    return;
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node=node->next;
    }
}

int main()
{
    Node* head=NULL;
    append(&head,5);
    push(&head,3);
    append(&head,1);
    insertAfter(head->next,9);
    printList(head);

}
