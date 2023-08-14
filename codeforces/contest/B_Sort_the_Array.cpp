//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int li = 0;
    for(int i=0;i<n;i++){
        if(v[i]>v[i+1]){
            li = i;
        }
    }
    int st = li;
    int y = st;
    while(v[li-1]>v[li] && li>0){
        li--;
    }
    int x = li;
    while(li < st){
        swap(v[li],v[st]);
        li++;st--;
    }
    bool flag = false;
    for(int i=0;i<n-1;i++){
        if(v[i] < v[i+1]){
            continue;
        }
        else{
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"yes"<<endl;
        cout<<x+1<<" "<<y+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
int main()
{
    solve();
    return 0;
}