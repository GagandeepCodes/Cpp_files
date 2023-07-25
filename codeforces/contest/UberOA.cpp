//code aisa likho ki,
//4 log debug krne se dare

/*
    Programming is like sex: 
        You love it untill you makes a mistake.
          ~ Gagandeep Bhardwaj   
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<long long>
#define vpii vector<pair<int, int>>
#define fin(i,n)  for(ll i = 0 ; i<n ; i++)

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LLINF = 1e18;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int k=0;
        float add=0;
        int past_max=INT32_MIN;

        vector<int> v;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }

        int i=0;
        while(i<n){
            if(v[i]>=past_max){
                past_max=v[i];
            }
            else{
                if((v[i]+add)>=past_max){
                    v[i]=v[i]+add;
                }
                else{
                    if(add==0) add=0.5;
                    while(v[i]<past_max){
                    add=add*2;
                    v[i]=v[i]+add;
                    k++;
                    }
                }
                past_max=v[i];
            }
            // cout<<v[i]<<" "<<k<<endl;
            i++;
        }
        cout<<k<<endl;
    }
    return 0;
}