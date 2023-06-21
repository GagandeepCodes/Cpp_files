#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int l ;
        cin>>l;
        vector<int> input;
        for(int i=0;i<l;i++){
            int a;
            cin>>a;
            input.push_back(a);
        }
        // sort(input.begin(),input.end());
        map<int,int> m;
        for(int i=0;i<l;i++){
            m[input[i]]++;
        }
        int flag=0;
        for(int i=1;i<200;i++){
            if(m[i]>m[i-1]){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        flag = 0;
    }
    return 0;
}