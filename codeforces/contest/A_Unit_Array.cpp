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
        long long sum = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            sum+=a;
            if(a==-1)cnt++;
        }
        long long ans = 0;
        while(sum<0){
            ans++;
            sum+=2;
            cnt--;
        }
        if(cnt%2) ans++;
        cout<<ans<<endl;
    }
    return 0;
}