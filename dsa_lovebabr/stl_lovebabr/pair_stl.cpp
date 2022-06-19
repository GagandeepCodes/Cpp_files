#include<bits/stdc++.h>
using namespace std;
#define mp make_pair

//*********************** function of pair *********************

pair<int,int> returnmypair(int a , int b)
{
    pair<int,int> p;
    p = mp(a,b);


    return p;
    // mp(a,b);
}


int main()
{
    pair<int,int> p;
    p = mp(2,4);
    // p = {2,4};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,int> p_array[3];
    p_array[0] = mp(1,2);
    p_array[1] = mp(2,3);
    p_array[2] = mp(3,4);

    for(int i=0;i<3;i++)
    {
        cout<<p_array[i].first <<" " << p_array[i].second << endl;
    }


    cout << returnmypair(1,2).first  << " " << returnmypair(1,2).second << endl;


    return 0;
}