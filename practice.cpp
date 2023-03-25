// #include<bits/stdc++.h>
// using namespace std;

// int MissingNo(int arr[], int n) {
//   int x1 = arr[0];
//   int x2 = 1;

//   for (int i = 1; i < n; i++)
//     x1 = x1 ^ arr[i];

//   for (int i = 2; i <= n + 1; i++)
//     x2 = x2 ^ i;

//   return (x1 ^ x2);
// }

// vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
//     {
//         // code here 
//          vector <int> ans;
//     // int row = matrix.size();
//     // int col = matrix[0].size();

//     int count = 0;
//     int total = r*c-1;

//     int sr = 0;
//     int sc = 0;
//     int er = r -1;
//     int ec = c -1;

//     while(count <= total)
//     {
//         // starting row
//         for(int index = sc; count < total && index<=ec;index++)
//         {
//             ans.push_back(matrix[sr][index]);
//             count++;
//         }
//         sr++;

//         // ending col
//         for(int index=sr;count < total && index>=er;index++)
//         {
//             ans.push_back(matrix[index][ec]);
//             count++;
//         }
//         ec--;

//         //ending row
//         for(int index=ec;count < total && index>=sc;index--)
//         {
//             ans.push_back(matrix[er][index]);
//             count++;
//         }
//         er--;

//         //starting col
//         for(int index = er;count < total && index>=sr;index--)
//         {
//             ans.push_back(matrix[index][sc]);
//             count++;
//         }
//         sc++;
//     }
    
//     return ans;
    
//     }

// int main()
// {

//     // int arr[] = {1,2,3,4,5,6,7,8,10};
//     // vector<vector<int> > v= {{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15,16}}; 
//     // spirallyTraverse(v,4,4);
//     string s;
//     cin>>s;
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]=='1')
//         {
//             s[i] = '0';
//         }

//     }
//     cout<<s<<endl;
//     // cout<<MissingNo(arr,9)<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int sumofno(int n,int sum){

//     //base case
//     if(n==0){
//         return sum;
//     }

//     // int sum = 0;
//     sum = n + sumofno(n-1,sum);
//     return sum;
// }
// int main()
// {
//     int a = 4;
//     int sum = 0;
//     cout<<sumofno(a,sum)<<endl;  
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v[10]<<endl;
    return 0;
}