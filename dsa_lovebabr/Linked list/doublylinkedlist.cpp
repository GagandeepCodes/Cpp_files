#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
//inserting element at head
void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//inserting at tail
void insertattail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
//inserting at a position
void insertatposition(Node* &tail, Node* &head, int position ,int d){
    //insert at first position
    if(position==1){
        insertathead(head,d);
        return ;
    }
    //moving to second last position
    Node* temp = head;
    int count = 0;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    //if position to be insert is next to tail ( or temp becomes tail)
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }
    //creating  a node for d
     Node* nodetoinsert = new Node(d);
     nodetoinsert->next = temp->next;
     (temp->next)->prev = nodetoinsert;
     temp->next = nodetoinsert;
     nodetoinsert->prev = temp;
}
//traversing through the linked list
void print(Node* &head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//getting length of the linked list
int getlen(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    return count;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
     Node *tail = node1;
    print(head);
    cout<<"length of Linked list: "<<getlen(head)<<endl;
    insertathead(head,11);
    print(head);
    insertathead(head,13);
    print(head);
    insertathead(head,15);
    print(head);
    insertathead(head,17);
    print(head);
    insertattail(tail,12);
    print(head);
    insertatposition(tail,head,4,16);
    print(head);
    insertatposition(tail,head,1,8);
    print(head);
    insertatposition(tail,head,8,21);
    print(head);
    cout<<head->data<<" "<<tail->data<<endl;
    // insertattail(tail,12);
    // print(tail);


    return 0;
}