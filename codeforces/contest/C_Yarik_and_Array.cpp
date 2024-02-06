#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)
const int M=1e9+7; //998244353;
void solve(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int l=0;
        long long ans = LLONG_MIN;
        for(int i=1;i<n;i++){
            if((abs(v[i])%2)==(abs(v[i-1])%2)){
                long long temp = 0; long long res = LLONG_MIN;
                for(int j=l;j<i;j++){
                    temp += v[j];
                    res = max(res,temp);
                    if(temp < 0) temp = 0;
                }
                ans = max(ans,res);
                l = i;
            }
        }
        long long temp2 = 0; long long res2 = LLONG_MIN;
        for(int i=l;i<n;i++){
            temp2 += v[i];
            res2 = max(res2,temp2);
            if(temp2 < 0) temp2 = 0;
        }
        ans = max(ans,res2);
        cout<<ans<<endl;
    }
}
int main()
{
    solve();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define rep(i,a,b) for(ll i=a;i<b;i++)
// const int M=1e9+7; //998244353;

// void calculateMaxSum(const vector<long long>& arr, int len) {
//     int start = 0;
//     long long result = LLONG_MIN;

//     int i = 1;
//     while (i < len) {
//         if ((abs(arr[i]) % 2) == (abs(arr[i - 1]) % 2)) {
//             long long currentSum = 0;
//             long long currentResult = LLONG_MIN;

//             int j = start;
//             while (j < i) {
//                 currentSum += arr[j];
//                 currentResult = max(currentResult, currentSum);
//                 if (currentSum < 0) {
//                     currentSum = 0;
//                 }
//                 j++;
//             }

//             result = max(result, currentResult);
//             start = i;
//         }
//         i++;
//     }

//     long long tempSum = 0;
//     long long tempResult = LLONG_MIN;

//     int k = start;
//     while (k < len) {
//         tempSum += arr[k];
//         tempResult = max(tempResult, tempSum);
//         if (tempSum < 0) {
//             tempSum = 0;
//         }
//         k++;
//     }

//     result = max(result, tempResult);
//     cout << result << endl;
// }

// void solve() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long n;
//         cin >> n;
//         vector<long long> array(n, 0);

//         int i = 0;
//         while (i < n) {
//             cin >> array[i];
//             i++;
//         }

//         calculateMaxSum(array, n);
//     }
// }

// int main() {
//     solve();
//     return 0;
// }
