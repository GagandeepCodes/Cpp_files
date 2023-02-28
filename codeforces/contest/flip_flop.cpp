#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        long long int neg = 0;
        long long int pos = 0;
        bool flag = false;
        long long int sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]==-1 && arr[i+1]==-1){
                flag = true;
                break;
            }
        }
        if(flag==true){
            // return pos-neg+4;
            cout<<(sum+4)<<endl;
        }
        else if(sum == n){
            cout<<(sum-4)<<endl;
        }
        else{
            cout<<(sum)<<endl;
        }
        
    }
    return 0;
}