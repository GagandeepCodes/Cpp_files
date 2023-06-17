#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    long long sum = 0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        sum+=a;  
    }
    sort(v.begin(),v.end());
    long long newsum = 0;
    int coins = 0;
    for(int i=n-1;i>=0;i--){
        newsum+=v[i];
        coins++;
        if(newsum>sum/2){
            break;
        }
    }
     cout<<coins<<endl;
    return 0;
}