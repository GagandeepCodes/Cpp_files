Node* firstnode(Node* head){
    unordered_map<Node* ,bool> m;
    Node* temp = head;
    while(temp != NULL){
        if(m[temp] == true){
            return temp;
        }
        else
            m[temp] = true;
        temp = temp -> next;
    }
    
    return NULL;
}
//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    int count = 0;
    if(firstnode(head) == NULL){
        return 0;
    }
    Node* first = firstnode(head);
    Node* temp = first;
    
    while(temp -> next != first){
        count++;
        temp = temp -> next;
    }
    
    return (count+1);
}