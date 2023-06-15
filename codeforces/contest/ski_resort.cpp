// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int  n,k,q;
//         cin>>n>>k>>q;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int i=0,j=0;
//         long long int ans = 0;
//         while(j<n){
//             if(arr[j]<=q){
//                 while(j<n && arr[j]<=q){
//                 j++;
//                 }
//                 if(j-i >=k){
//                     ans+=(j-i-k+1)*(j-i-k+2)/2;
//                 }
//                 j++;
//                 i=j;
//             }
//             else{
//                 j++;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int t;
    cin>>t;
    while(t--){
        long long int  n,k,q;
        cin>>n>>k>>q;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int j=0;
        long long int ans = 0;
        while(j<n){
            if(arr[j]<=q){
                int count = 0;
                 while(j<n && arr[j]<=q){
                    count++;
                    j++;
                    if(j>=n) break;
                }
                if(count>=k){
                    ans+=(count-k+1)*(count-k+2)/2;
                }
            }
            else{
                j++;
            }
        }
        cout<<ans<<endl;
    }
}
 
int main()
{
    solve();
    return 0;
}