#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        /*
                    10
                   /  \
                  5    50
                 /    /  \
                1    40  100
                
             preorder - 10,5,1,50,40,100
             leaf node - 1,40,100
             Data structure - stack
             1-> push the array element into stack
             2->if arr[i] > s[top],pop untill arr[i]<s.top , also store the s.top before poping
             3->
             
        */
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<N;i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                if(st.top() < arr[i]){
                    int pop_count = 0;
                    int temp = st.top();
                    while(!st.empty() && arr[i]>st.top()){
                        st.pop();
                        pop_count++;
                    }
                    if(pop_count>1){
                        ans.push_back(temp);
                    }
                    // ans.push_back(temp);
                    st.push(arr[i]);
                }
                else{
                    st.push(arr[i]);
                }
            }
        }
        ans.push_back(st.top());
        return ans;
    }
    
};
int main()
{
    
    return 0;
}