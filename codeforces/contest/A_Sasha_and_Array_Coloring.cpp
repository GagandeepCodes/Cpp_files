#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int sum = 0;
        sort(v.begin(),v.end());
        for(int i=0;i<n/2;i++){
            int diff = v[n-1-i] - v[i];
            sum+=diff;
            //  cout<<"this is sum "<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}