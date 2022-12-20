#include<bits/stdc++.h>
using namespace std;
int main()
{

    //vector<int> v = {2,3,4,5,6,7};
    vector<int> v;
    int n;
    cin >> n;
    for( int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0 ; i<v.size(); i++)
    {
        cout<< v[i] << " ";
    } cout<<endl;
    vector <int> ::iterator it = v.begin();

    for(it = v.begin(); it != v.end();it++) // v.end refers to ( end element ke next vala )
    {
        cout<<(*it)<<" ";
    } cout <<endl;
}