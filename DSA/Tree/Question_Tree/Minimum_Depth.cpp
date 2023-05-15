#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        queue<TreeNode *> q;
        q.push(root);
        int cnt = 0;
        while (!q.empty())
        {
            cnt++;
            int i = q.size();
            for (int j = 0; j < i; j++)
            {
                TreeNode *temp = q.front();
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
                q.pop();
                if (temp->left == NULL && temp->right == NULL)
                    return cnt;
            }
        }
        return -1;
    }

//     int minDepth(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int left = minDepth(root->left);
//     int right = minDepth(root->right);

//     int result;
//     if (left == 0 || right == 0)
//     {
//         return max(left, right) + 1;
//     }
//     else
//     {
//         result = min(left, right) + 1;
//     }
// }
};
    int main()
    {

        return 0;
    }