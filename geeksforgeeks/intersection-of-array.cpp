#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
    //     vector<int> v;
    //     unordered_map<int,int> mymap;
    
    // if(n>=m){
    //     for(int i = 0;i<n;i++){
    //         mymap[a[i]]++;
    //     }
        
    //     for(int j = 0;j<m;j++){
    //         if(mymap[b[j]]>0){
    //             v.push_back(b[j]);
    //         }
    //     }
    // }
    
    // else {
    //     for(int j = 0;j<m;j++){
    //         mymap[b[j]]++;
    //     }
        
    //     for(int i = 0;i<n;i++){
    //         if(mymap[a[i]]>0){
    //             v.push_back(a[i]);
    //         }
    //     }
    // }
    
    // return v.size();


    unordered_set<int> myset;
       for(int i=0;i<n;i++){
           myset.insert(a[i]);
       }
       int count=0;
       for(int i=0;i<m;i++){
           auto it= myset.find(b[i]); 
           if(it!=myset.end()){
               count++;
               myset.erase(b[i]);
           }
       }
       return count;
    
    }

int main()
{
    return 0;
}