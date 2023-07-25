//code aisa likho ki,
//4 log debug krne se dare
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;

int fib(int k,int a,int b)
{
    int c,i;
    if(k==3) return a;
    if(k==4) return b;
    for (i = 5; i <= k; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k>n){
            cout<<0<<endl;
            continue;
        }
        int x = fib(k,1,1);
        int y = fib(k,1,2);
        int b = 0;
        int ans = 0;
        while(b<=n/2){
                int temp = n - y*b;
                if(temp%x==0){
                    if((temp/x)>=b) ans++;
                }
                else break;
            b++;
        }
        cout<<ans<<endl;
    }
    return 0;
}