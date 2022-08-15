//line 144 to 164 code of check palindrome
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
int getlength(Node *&head, int length)
{
    if(head->next == NULL) return length;
    return getlength(head->next,length+1);

}
// inserting a node at head
void insertathead(Node *&head, int d, int &n)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
    n++;
}

// inserting things at tail
void insertattail(Node *&tail, int d, int &n)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
    n++;
}

// insert at a position
void insertatposition(Node *&tail, Node *&head, int position, int d, int &n)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        insertathead(head, d,n);
        return;
    }
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d,n);
        return;
    }

    Node *nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    n++;
}

// deleting a node
void deletenode(Node *&tail, Node *&head, int position, int &n)
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
    n--;
}
// removes duplicates
void removeduplicates(Node *&head, Node *&tail, int &n)
{

    map<int, int> counter;
    // int n = getlength(head);
    Node *temp = head;
    for (int i = 0; i <= n - 1; i++)
    {
        if (counter[temp->data] == 0)
        {
            counter[temp->data]++;
        }
        else
        {
            cout<<"Node with data "<<temp->data<<" is deleted ."<<endl;
            deletenode(tail, head, i+1,n);
        }

        temp = temp->next;
    }
}
Node* getnode(Node* head, int n){
    Node* temp = head;
    for(int i=0;i<n;i++){
        temp = temp -> next;
    }
    return temp;
}

bool check(Node* head){
    int n = getlength(head,1);
    Node* start = head;

    for(int i=0;i<=n/2;i++){
        Node* end = getnode(head,n-1-i);
        // cout<<start->data<<" "<<end->data<<endl;
        if(start -> data!= end -> data){
            return false;
        }
        start=start->next;
    }
    return true;
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
    // int f;
    // cout << "Please enter the first value of linked list : ";
    // cin >> f;
    // cout << endl;
    // Node *node1 = new Node(f);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *node1 = new Node(1);
    Node *head = node1;
    Node *tail = node1;
    // print(head);

    int n = getlength(head,1);
    // insertathead(head, 20,n);
    // insertathead(head,30);
    // print(head);
    insertattail(tail, 2,n);
    insertattail(tail, 3,n);
    insertattail(tail, 4,n);
    insertattail(tail, 3,n);
    insertattail(tail, 2,n);
    insertattail(tail, 1,n);
    print(head);
    // insertatposition(tail, head, 3,3,n);
    // print(head);
    // insertatposition(tail, head, 4, 3,n);
    // print(head);
    // insertatposition(tail, head, 5, 2,n);
    // print(head);
    // insertattail(tail, 1,n);
    // print(head);
    // deletenode(tail,head,7,n);
    // deletenode(tail,head,1,n);
    // print(head);
    // deletenode(tail,head,1,n);
    // insertattail(tail, 80,n);
    // print(head);
    // insertattail(tail, 90,n);
    // print(head);
    // insertattail(tail, 100,n);
    // print(head);
    // insertattail(tail, 100,n);
    // print(head);
    // removeduplicates(head, tail,n);
    // print(head);
    // Node* temp = getnode(head,0);
    // cout<<temp->data<<endl;
    cout<<"length : "<<getlength(head,1)<<endl;
    if(check(head)==1){
        cout<<"Yes it is a palindrome"<<endl;
    }
    else{
        cout<<"No it is not a palindrome"<<endl;
    }
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

    // cout << "THANK YOU" << endl;

    return 0;
}