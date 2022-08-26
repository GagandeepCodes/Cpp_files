// line 113 to 154 code of merge two sorted ll
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
// merged to sorted linked lists
Node *solve(Node *head, Node *head1)
{
    // defining pointers
    Node *curr1 = head;
    Node *next1 = curr1->next;
    Node *curr2 = head1;
    Node *next2 = curr2->next;

    while (curr2 != NULL && next1 != NULL)
    {
        // if only 1 items is there
        if (head->next == NULL)
        {
            head->next = head1;
            return head;
        }
        //main part
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            // updating pointers
            curr1 = curr2;
            curr2 = next2;
            // next1 = curr1->next;
        }
        else
        {
            // updating pointers
            curr1 = curr1->next;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                return head;
            }
        }
    }
    return head;
}
Node *sortedlists(Node *head, Node *head1)
{
    if (head == NULL)
    {
        return head1;
    }

    if (head1 == NULL)
    {
        return head;
    }

    if (head->data <= head1->data)
    {
        return solve(head, head1);
    }

    else
    {
        return solve(head1, head);
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
    // int f;
    // cout << "Please enter the first value of linked list : ";
    // cin >> f;
    // cout << endl;
    // Node *node1 = new Node(f);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *node1 = new Node(0);
    Node *node2 = new Node(1);
    Node *head1 = node2;
    Node *tail1 = node2;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    // insertathead(head, 2);
    insertattail(tail, 2);
    // insertathead(head,30);
    // print(head);
    insertattail(tail, 4);
    // print(head);
    insertatposition(tail, head, 4, 6);
    // print(head);
    insertatposition(tail, head, 5, 8);
    // print(head);
    insertatposition(tail, head, 6, 10);
    // print(head);
    insertattail(tail, 12);
    print(head);
    insertattail(tail1, 3);
    insertattail(tail1, 5);
    insertattail(tail1, 7);
    insertattail(tail1, 9);
    print(head1);
    // deletenode(tail,head,7);
    // print(head);
    // cout<<"tail : "<<tail->data<<endl;
    // deletenode(head,1);
    // print(head);
    // deletenode(head,1);
    cout << "Head : " << head->data << " "
         << "Tail : " << tail->data << endl;
    Node *newhead = sortedlists(head, head1);
    print(newhead);
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