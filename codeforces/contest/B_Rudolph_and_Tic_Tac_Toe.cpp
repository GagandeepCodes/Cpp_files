//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<vector<char> > mat;
        for(int i=0;i<3;i++){
            vector<char> v;
            for(int j=0;j<3;j++){
                char a;
                cin>>a;
                v.push_back(a);
            }
            mat.push_back(v);
        }
        if( mat[0][0]==mat[0][1]&& mat[0][1]==mat[0][2] && mat[0][0]!='.'){
            cout<<mat[0][0]<<endl;
        }
        else if(mat[1][0]==mat[1][1]&& mat[1][1]==mat[1][2] && mat[1][0]!='.'){
            cout<<mat[1][0]<<endl;
        }
        else if( mat[2][0]==mat[2][1] && mat[2][1]==mat[2][2] && mat[2][0]!='.'){
            cout<<mat[2][0]<<endl;
        }
        else if( mat[0][0]==mat[1][0]&& mat[1][0]==mat[2][0] && mat[0][0]!='.'){
            cout<<mat[0][0]<<endl;
        }
        else if( mat[0][1]==mat[1][1] && mat[1][1]==mat[2][1] && mat[0][1]!='.'){
            cout<<mat[0][1]<<endl;
        }
        else if(  mat[0][2]==mat[1][2] && mat[1][2]==mat[2][2] && mat[0][2]!='.'){
            cout<<mat[0][2]<<endl;
        }
        else if(  mat[0][0]==mat[1][1] && mat[1][1]==mat[2][2] && mat[0][0]!='.') {
            cout<<mat[0][0]<<endl;
        }
        else if( mat[0][2]==mat[1][1] && mat[1][1]==mat[2][0] && mat[0][2]!='.'){
            cout<<mat[0][2]<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}