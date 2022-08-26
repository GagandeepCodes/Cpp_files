#include <bits/stdc++.h>
//line-->114 to line-->138 Get Middle of linked list code
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

Node* GetMiddle(Node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;


    while(fast!=NULL)
    {
        fast = fast->next;

        if(fast!=NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow;
}
void reverseLinkedList(Node* &tail,Node* &head){
    if(head == NULL || head-> next == NULL)
    {
        head = NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    tail = curr;

    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

Node* reverse2(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverse2(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
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
    int f;
    cout << "Please enter the first value of linked list : ";
    cin >> f;
    cout << endl;
    Node *node1 = new Node(f);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // insertathead(head, 20);
    // // insertathead(head,30);
    // print(head);
    // insertattail(tail, 40);
    // print(head);
    // insertatposition(tail,head,3,50);
    // print(head);
    // insertatposition(tail,head,1,60);
    // print(head);
    // insertatposition(tail,head,6,70);
    // print(head);
    // insertattail(tail,80);
    // print(head);
    // deletenode(tail,head,7);
    // print(head);
    // cout<<"tail : "<<tail->data<<endl;
    // deletenode(head,1);
    // print(head);
    // deletenode(head,1);
    // cout<<head->data<<" "<<tail->data<<endl;
    while (1)
    {
        int n, x;
        cout << "\n1.insert at head\n2.insert at tail\n3.insert at position\n4.delete a node\n5.Print linked list\n6.Reverse linked list\n7.exit" << endl;
        cout << "press any of the following keys : ";
        cin >> n;
        cout << endl;
        if (n == 7)
        {
            break;
        }
        switch (n)
        {
        case 1:
            cout << "enter the element you want to insert : ";
            cin >> x;
            insertathead(head, x);
            print(head);
            break;

        case 2:
            cout << "enter the element you want to insert : ";
            cin >> x;
            insertattail(tail, x);
            print(head);
            break;

        case 3:
            int p;
            cout << "enter the position and element you want to insert : ";
            cin >> p >> x;
            insertatposition(tail, head, p, x);
            print(head);
            break;

        case 4:
            cout << "enter the position you want to delete the node : ";
            cin >> x;
            deletenode(tail, head, x);
            print(head);
            break;

        case 5:
            print(head);
        
        case 6:
            reverseLinkedList(tail,head);
            print(head);
        }
    }

    cout << "THANK YOU" << endl;

    return 0;
}