//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<vector<long long> > time;
        for(long long i=0;i<n;i++){
            vector<long long> prob;
            for(long long j=0;j<m;j++){
                long long a;
                cin>>a;
                prob.push_back(a);
            }
            sort(prob.begin(),prob.end());
            time.push_back(prob);
        }
        vector<pair<long long,long long> > v;
        bool flag = false;
        long long rudo = 0;
        long long rudo_time = 0;
        for(long long i=0;i<n;i++){
            long long  sum = 0;
            long long  total = 0;
            long long  point = 0;
            for(long long  j=0;j<m;j++){
                sum+=time[i][j];
                if(sum<=h){
                    total+=sum;
                    point++;
                }
            }
            pair<long long,long long > p;
            p = make_pair(point,total);
            v.push_back(p);
            if(flag==false){
                rudo=point;
                rudo_time = total;
            }
            flag=true;
        }
        long long rank = 0;
        for(long long i=1;i<v.size();i++){
            if(rudo<v[i].first){
                rank++;
            }
            else if(rudo==v[i].first && rudo_time>v[i].second){
                rank++;
            }
        }
        rank++;
        cout<<rank<<endl;
    }
    return 0;
}