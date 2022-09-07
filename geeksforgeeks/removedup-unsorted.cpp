Node* deletenode(Node* head,int position,int n){
        Node* curr = head;
        Node* prev = NULL;
        int count = 0;

        if(position == 1){
            Node* temp = head;
            head  = head -> next;
            temp -> next = NULL;
            delete temp;
        }

        //moving to that position
        while(count<position){
            prev = curr;
            curr = curr->next;
            prev -> next = curr;
            count++;
        }
        //delete a node
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

        return head;
}