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
        long long int sum = 0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
            sum+=abs(a);
        }

        int cnt = 0;
        int flag = 0;
        for(int i=0;i<n;i++){
            if(v[i]<=0){
                if(v[i]==0 &&flag==0){

                }
                else{
                    flag=1;
                }
            }
            else{
                if(flag==1){
                    cnt++;
                    // cout<<"flag is 0 at "<<v[i-1]<<endl;
                    flag=0;
                }
            }
        }
        if(flag==1){
            cnt++;
        }

        cout<<sum<<" "<<cnt<<endl;
    }

    return 0;
}