#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //We need to create a new linked list having the numbers after sum
        ListNode* newList = new ListNode();
        ListNode* ptr = newList;
        int carry = 0;
        while(l1 || l2 || carry){
            //get reset for every Node - to - Node addition
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            ptr->next = node;
            ptr=ptr->next;
        }

        return newList->next;
    }
};
int main()
{
    
    return 0;
}