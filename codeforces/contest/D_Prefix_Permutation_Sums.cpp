//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n-1,0);
        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }
        map<int,int> m;
        // for(int i=1; i<=n; i++){
        //     m[i]=0;
        // }
        bool flag = false;
        ll  sum = n*(n+1);sum>>=1; 
        m[v[0]]++;
        // int prev= v[0];
        for(int i=1;i<n-1;i++){
            int diff = abs(v[i] - v[i-1]);
            if(diff>sum){
                flag = true;
                break;
            }
            m[diff]++;
        }
        if(flag==true){
            cout<<"NO"<<endl;
            continue;
        }
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(m[i]==0){
                cnt++;
            }
        }
        if(cnt==1 && v[n-2]!=sum){
            cout<<"YES"<<endl;
        }
        else if(v[n-2]==sum && cnt==2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        flag = false;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define sort(a) sort(a.begin(),a.end())
// #define M 1000000007
// #define int long long
// #define endl "\n"
 
// /* 
 
// peace ✌️ 
 
// */
 
 
 
// /* code begins here */
// void solve(){
//     int n;
//     cin>>n;
//     vector<int>a(n-1);
//     for(int i=0;i<n-1;i++){
//         cin>>a[i];
//     }
//     int sum = n*(n+1);sum>>=1;
//     map<int,int>mp1,mp2;
//     mp1[a[0]]++;
//     for(int i=1;i<n-1;i++){
//         int t = a[i] - a[i-1];
//         if(t>sum){
//             cout<<"NO"<<"\n";
//             return;
//         }
//         mp1[t]++;
//     }
//     // for(int i=1;i<n-1;i++){
//     //     int t = a[i] - a[i-1];
//     //     mp2[t]++;
//     // }
//     int rem1 = 0;
//     for(int i=1;i<=n;i++){
//         if(mp1[i]==0){
//             rem1++;
//         }
//         // if(mp2[i]==0){
//         //     rem2++;
//         // }
//     }
//     if(a[n-2]!=sum){
//         if(rem1==1){
//             cout<<"YES"<<"\n";
//             return;
//         }
//     }
//     else if(rem1==2){
//         cout<<"YES"<<"\n";
//         return;
//     }
//     cout<<"NO"<<"\n";
// }

// signed main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// }