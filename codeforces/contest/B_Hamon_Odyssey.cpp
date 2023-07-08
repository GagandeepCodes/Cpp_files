//code aisa likho ki,
//4 log debug krne se dare
 
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
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        int i=0,j=0;
        long long int max_limit=1;
        while(max_limit<=1e9){
            max_limit=max_limit*2;
        }
        max_limit--;
        long long int mini=max_limit;

        int k=0;
        while(k<n) mini&=v[k++];

        int andd=max_limit;

        int count=0;
        while(j<n){
           andd&=v[j];
           if(andd==0){
               count++;
               andd=max_limit;
            }
            j++;
        }
        count = mini==0?count:count+1;
        cout<<count<<endl;
    }
return 0;
}