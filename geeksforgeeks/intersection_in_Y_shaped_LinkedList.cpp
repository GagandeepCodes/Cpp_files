
#include<bits/stdc++.h>
using namespace std;
int getlength(Node *head, int length)
{
    if(head->next == NULL) return length;
    return getlength(head->next,length+1);

}
//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
       int n1 = getlength(head1 , 1);
       int n2 = getlength(head2 , 1);
       int dif;
       Node* temp=NULL;
       Node* temp2=NULL;
       
       if(n1>n2)
       {
            dif = n1-n2;
           temp=head1;
            temp2=head2;
            
            for(int i=0; i<dif; i++)
              temp=temp->next;
           
       }
       else 
       {
          dif = n2-n1;
           temp = head2;
            temp2 = head1;
            
            for(int i=0; i<dif; i++)
              temp=temp->next;
       }
    
       while(temp!=temp2)
       {
           temp =temp->next;
           temp2=temp2->next;
       }
       
       if(temp!=NULL)
       return temp->data;
          
           else
            return -1;
}
int main()
{
    
    return 0;
}