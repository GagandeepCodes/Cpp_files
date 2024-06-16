// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;

// class node {
// public:
//     int data;
//     node* left;
//     node* right;

//     node(int d) {
//         this->data = d;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// void levelOrderTraversal(node* root) {
//     if (root == nullptr)
//         return;

//     queue<node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int size = q.size();
//         for (int i = 0; i < size; ++i) {
//             node* current = q.front();
//             q.pop();
//             cout << current->data << " ";
//             if (current->left != nullptr)
//                 q.push(current->left);
//             if (current->right != nullptr)
//                 q.push(current->right);
//         }
//         cout << endl;
//     }
// }

// void buildFromLevelOrder(node* &root, vector<int> list, int n, int index = 0) {
//     if (index >= n || list[index] == INT_MAX) {
//         root = nullptr;
//         return;
//     }

//     root = new node(list[index]);
//     buildFromLevelOrder(root->left, list, n, 2 * index + 1);
//     buildFromLevelOrder(root->right, list, n, 2 * index + 2);
// }
// int findMaxPathSum(node * root, int & maxi) {
//   if (root == NULL) return 0;

//   int leftMaxPath = max(0, findMaxPathSum(root -> left, maxi));
//   int rightMaxPath = max(0, findMaxPathSum(root -> right, maxi));
//   int val = root -> data;
//   maxi = max(maxi, (leftMaxPath + rightMaxPath) + val);
//   return max(leftMaxPath, rightMaxPath) + val;

// }
// int maxPathSum(node * root) {
//   int maxi = INT_MIN;
//   findMaxPathSum(root, maxi);
//   return maxi;

// }
// int main() {
//    string s;
//     getline(cin, s, '\n');
//     vector<int>list;
//     int i=0;
//     while(i<s.size()){
//         if(s[i]=='n'){
//             list.push_back(INT_MAX);
//             while(s[i]!=' ' && i<s.size()){
//                 i++;
//             }
//         }
//         else if(s[i]!=' '){
//             int j = i;
//             while(s[j]!=' ' && i<s.size()){
//                 j++;
//             }
//             string w = s.substr(i,j-i);
//             i = j;
//             int num = stoi(w);
//             // int x = int(s[i])-48;    
//             list.push_back(num);
//         }
//         i++;
//     }
//     node *root = nullptr;
//     buildFromLevelOrder(root, list, list.size());
//     int ans = maxPathSum(root);
//     cout<<ans<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

pair<int, int> findMaxPathSum(node* root, int &maxi) {
    if (root == nullptr) return {0, INT_MIN};

    auto left = findMaxPathSum(root->left, maxi);
    auto right = findMaxPathSum(root->right, maxi);

    int leftMaxPath = max(0, left.first);
    int rightMaxPath = max(0, right.first);
    int val = root->data;

    int currentSum = max(leftMaxPath, rightMaxPath) + val;
    maxi = max(maxi, max(leftMaxPath + rightMaxPath + val, currentSum));

    return {currentSum, maxi};
}

int maxPathSum(node* root) {
    int maxi = INT_MIN;
    findMaxPathSum(root, maxi);
    return maxi;
}

void buildFromLevelOrder(node* &root, const vector<int>& list, int n, int index = 0) {
    if (index >= n || list[index] == INT_MAX) {
        root = nullptr;
        return;
    }

    root = new node(list[index]);
    buildFromLevelOrder(root->left, list, n, 2 * index + 1);
    buildFromLevelOrder(root->right, list, n, 2 * index + 2);
}

int main() {
    string s;
    getline(cin, s, '\n');
    vector<int> list;
    int i = 0;
    while (i < s.size()) {
        if (s[i] == 'n') {
            list.push_back(INT_MAX);
            while (s[i] != ' ' && i < s.size()) {
                i++;
            }
        }
        else if (s[i] != ' ') {
            int j = i;
            while (s[j] != ' ' && i < s.size()) {
                j++;
            }
            string w = s.substr(i, j - i);
            i = j;
            int num = stoi(w);
            list.push_back(num);
        }
        i++;
    }
    node* root = nullptr;
    buildFromLevelOrder(root, list, list.size());
    int ans = maxPathSum(root);
    cout << ans << endl;
    return 0;
}
