//code of sort 0 , 1, 2 is from line no 114 to 154
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // parameterized constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memeory is free for data " << value << endl;
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

// insert at a position
void insertatposition(Node *&tail, Node *&head, int position, int d)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    Node *nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// deleting a node
void deletenode(Node *&tail, Node *&head, int position)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting middle or last node
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;

        // updating the tail
        if (prev->next == NULL)
        {
            tail = prev;
        }
        delete curr;
    }
}
//sort 0's , 1's and 2's
Node* sortlist(Node* &head){
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp -> data == 0){
            zerocount++;
        }
        else if(temp -> data == 1){
            onecount++;
        }
        else if(temp -> data == 2)
        {
            twocount++;
        }

        temp = temp -> next;
    }

    temp = head;
    while(temp!=NULL){
        if(zerocount!=0){
            temp->data = 0;
            zerocount--;
        }
        else if(onecount!=0){
            temp -> data = 1;
            onecount--;
        }
        else if(twocount!=0){
            temp -> data = 2;
            twocount--;
        }
        temp = temp -> next;
    }

    return head;
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
    Node* node1 = new Node(0);
    // int f;
    // cout << "Please enter the first value of linked list : ";
    // cin >> f;
    // cout << endl;
    // Node *node1 = new Node(f);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertathead(head, 0);
    // insertathead(head,30);
    print(head);
    insertattail(tail, 0);
    print(head);
    insertatposition(tail,head,3,1);
    print(head);
    insertatposition(tail,head,1,1);
    print(head);
    insertatposition(tail,head,6,2);
    print(head);
    insertattail(tail,1);
    print(head);
    // deletenode(tail,head,7);
    // print(head);
    cout<<"Head : "<<head->data;
    cout<<" tail : "<<tail->data<<endl;
    Node* newhead = sortlist(head);
    print(newhead);
     cout<<"Head : "<<head->data;
    cout<<" tail : "<<tail->data<<endl;
    // deletenode(head,1);
    // print(head);
    // deletenode(head,1);
    // cout<<head->data<<" "<<tail->data<<endl;
    // while (1)
    // {
    //     int n, x;
    //     cout << "\n1.insert at head\n2.insert at tail\n3.insert at position\n4.delete a node\n5.Print linked list\n6.exit" << endl;
    //     cout << "press any of the following keys : ";
    //     cin >> n;
    //     cout << endl;
    //     if (n == 6)
    //     {
    //         break;
    //     }
    //     switch (n)
    //     {
    //     case 1:
    //         cout << "enter the element you want to insert : ";
    //         cin >> x;
    //         insertathead(head, x);
    //         print(head);
    //         break;

    //     case 2:
    //         cout << "enter the element you want to insert : ";
    //         cin >> x;
    //         insertattail(tail, x);
    //         print(head);
    //         break;

    //     case 3:
    //         int p;
    //         cout << "enter the position and element you want to insert : ";
    //         cin >> p >> x;
    //         insertatposition(tail, head, p, x);
    //         print(head);
    //         break;

    //     case 4:
    //         cout << "enter the position you want to delete the node : ";
    //         cin >> x;
    //         deletenode(tail, head, x);
    //         print(head);
    //         break;

    //     case 5:
    //         print(head);
    //     }
    // }

    cout << "THANK YOU" << endl;

    return 0;
}