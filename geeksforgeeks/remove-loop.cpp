class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
          Node *fast = head;
          Node *slow = head;
          
          while(fast != NULL) {
              fast = fast -> next;
              
              if(fast != NULL) {
                  fast = fast -> next;
                  slow = slow -> next;
                  
                  if(slow == fast) {
                      slow = head;
                      fast = fast;
                      
                      while(slow != fast) {
                          slow = slow -> next;
                          fast = fast -> next;
                      }
                      Node* temp = slow;
                      
                      while(temp -> next != slow) {
                          temp = temp -> next;
                      }
                      
                      temp -> next = NULL;
                  }
              }
          }
    }
};