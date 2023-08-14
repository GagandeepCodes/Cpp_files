//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> v(n,0);
    int total = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }
    if(total + (n-1)*10 > d){
        cout<<-1<<endl;
    }
    else{
        cout<<((d-total)/5)<<endl;
    }
    return 0;
}