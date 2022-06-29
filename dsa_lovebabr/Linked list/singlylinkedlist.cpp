#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // int getdata(){
    //     return this->data;
    // }
    // Node* getnext(){
    //     return this->next;
    // }
};
// inserting things at head

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
// inserting things at tail

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//insert at a position

void insertatposition(Node* &tail,Node* &head, int position , int d){
    Node* temp = head;
    int cnt = 1;
    if(position==1){
        insertathead(head,d);
        return;
    }
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }

    Node* nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
// printing linked list

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertathead(head, 20);
    // insertathead(head,30);
    print(head);
    insertattail(tail, 40);
    print(head);
    insertatposition(tail,head,3,50);
    print(head);
    insertatposition(tail,head,1,60);
    print(head);
    insertatposition(tail,head,6,70);
    print(head);
    insertattail(tail,80);
    print(head);
    // cout<<head->data<<" "<<tail->data<<endl;

    return 0;
}