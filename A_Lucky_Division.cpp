#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // string input = to_string(n);
    // string res = "";
    // int flag = 0;
    // for(int i=0;i<input.size();i++){
    //     if(input[i]=='4' || input[i]=='7'){
    //         if(res.find(input[i])==string::npos){
    //             res.push_back(input[i]);
    //         }
    //     }
    //     else if(input[i]!='4' && input[i]!='7'){
    //             if(n%4==0 || n%7==0){
    //                 cout<<"YES"<<endl;
    //                 flag=1;
    //                 break;
    //             }else{
    //                 cout<<"NO"<<endl;
    //                 flag=1;
    //                 break;
    //             }
    //     }
    // }
    vector<int> v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(47);
    v.push_back(74);
    v.push_back(44);
    v.push_back(447);
    v.push_back(474);
    v.push_back(444);
    v.push_back(77);
    v.push_back(774);
    v.push_back(477);
    v.push_back(777);
    int flag = 0;
    for (int i = 0; i < 12; i++)
    {
        if (n % v[i] == 0)
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    return 0;
}