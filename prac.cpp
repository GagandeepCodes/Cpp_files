#include <iostream>
#include <unordered_map>
#include <vector>
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
};

Node *creatlink(vector<int> v)
{
    Node *head = new Node(-1);
    Node *temp = head;
    for (int i = 0; i < v.size(); i++)
    {
        Node *add = new Node(v[i]);
        temp->next = add;
        temp = add;
    }
    temp->next = NULL;
    head = head->next;
    return head;
}
void display(Node *head)
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
    int x, y;
    cout << "Enter the size of your linked list 1 & 2: "
         << " ";
    cin >> x >> y;

    vector<int> A;
    vector<int> B;
    cout << "\nEnter your linked list A: " << endl;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        A.push_back(a);
    }
    cout << "\nEnter your linked list B: " << endl;
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;
        B.push_back(a);
    }

    Node *head1 = creatlink(A);
    Node *head2 = creatlink(B);

    unordered_map<int, int> m;
    Node *temp = head1;

    Node *C = new Node(-1);
    Node *D = new Node(-1);
    Node *temp1 = C;
    Node *temp2 = D;

    while (temp != NULL)
    {
        if (m[temp->data] == 0)
        {
            Node *add = new Node(temp->data);
            temp2->next = add;
            temp2 = add;
        }
        m[temp->data]++;
        temp = temp->next;
    }

    temp = head2;
    while (temp != NULL)
    {
        if (m[temp->data] > 0)
        {
            Node *add = new Node(temp->data);
            temp1->next = add;
            temp1 = add;
        }
        if (m[temp->data] == 0)
        {
            Node *add = new Node(temp->data);
            temp2->next = add;
            temp2 = add;
        }
        temp = temp->next;
    }
    C = C->next;
    D = D->next;
    display(C);
    display(D);
}