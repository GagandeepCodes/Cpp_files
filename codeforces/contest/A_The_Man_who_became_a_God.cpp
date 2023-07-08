//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int> diff;
        for(int i=0;i<n-1;i++){
            diff.push_back(abs(v[i]-v[i+1]));
        }
        sort(diff.begin(),diff.end());
        long long sum = 0;
        for(int i=0;i<n-k;i++){
            sum+=diff[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}