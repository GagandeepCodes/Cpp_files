//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a,b;
    cin>>a;
    set<int> st;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    cin>>b;
    for(int i=0;i<b;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    if(st.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}