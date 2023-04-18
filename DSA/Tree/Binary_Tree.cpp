#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    // enter the the data
    cout << "enter the data " << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    // entering data in the left of the root
    cout << "enter the data in the left of : " << data << endl;
    root->left = buildTree(root->left);
    // entering data in the right of the root
    cout << "enter the data in the right of : " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){ 
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){ 
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    cout<<endl;
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data of the root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();


        cout<<"Enter the left node of : "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp ->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right node of : "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp ->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
void inorder(node* root){
    // cout<<"This is inroder travseral"<<endl;
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    // cout<<"This is preorder traversal"<<endl;
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    // cout<<"This is postorder traversal"<<endl;
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    // 1 3 7 11 -1 -1 13 -1 -1 9 -1 -1 5 -1 -1 
    node *root = NULL;
    // root = buildTree(root);

    // 1 3 5 7 9 6 8 11 13 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    cout<<"This is inroder travseral"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"This is preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"This is postorder traversal"<<endl;
    postorder(root);
    return 0;
}