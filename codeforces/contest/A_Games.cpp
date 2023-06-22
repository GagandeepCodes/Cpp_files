#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> h;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        h.push_back(x);
        a.push_back(y);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            else{
                if(h[i]==a[j]){
                    // cout<<h[i]<<" equals to "<<a[j]<<endl;
                    ans++;
                }
                if(a[i]==h[j]){
                    // cout<<a[i]<<" equals to "<<h[j]<<endl;
                    ans++;
                }
            }
        }
    }
    cout<<ans/2<<endl;

    return 0;
}