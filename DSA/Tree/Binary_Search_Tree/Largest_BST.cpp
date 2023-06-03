#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> solve(Node* root)
    {
        if(root == NULL) // agr yeh NULL hai
        return {true, 0, INT_MAX, INT_MIN};
        
        if(root -> left == NULL && root -> right == NULL) // agr yeh leaf node hai
        return {true, 1, root -> data, root -> data};
        
        vector<int> left = solve(root -> left); // come from left side
        vector<int> right = solve(root -> right); // come from right side
        
        if(left[0] == true && right[0] == true) // agr left aur right dono BST hain toh
        {
            // khd BST ki condition
            if(root -> data > left[3] && root -> data < right[2])
            {
                int x = left[2];
                int y = right[3];
                
                if(x == INT_MAX)
                x = root -> data;
                
                if(y == INT_MIN)
                y = root -> data;
                
                // return (see  above)
                return {1, left[1] + right[1] + 1, x, y};
            }
        }
        return {0, max(left[1], right[1]), 0,0};
    }
    int largestBst(Node *root)
    {
    	vector<int> ans = solve(root);
    	return ans[1];
    }
};
int main()
{
    
    return 0;
}