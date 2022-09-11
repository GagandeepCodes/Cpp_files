Node* insert(Node* &newhead,int data){
    Node* node1 = new Node(data);
    Node* store = newhead;
    while(store -> next != NULL){
        store = store -> next;
    }
    
    store -> next = node1;
}
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    map<Node*,int> m;
    
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while(temp1!= NULL){
        m[temp1]++;
        temp1 = temp1->next;
    }
    
    while(temp2 != NULL){
        m[temp2]++;
        temp2 = temp2 -> next;
    }
    auto t = m.begin();
    Node* newhead = *t.first;
    for(auto it : m){
        
        insert(newhead,it.first -> data);
    }
    return newhead;
    
}