#include<bits/stdc++.h>
using namespace std;
#define mp make_pair

void printVec(vector<pair<int,int> > &v)
{
  cout<<"size : "<<v.size() << endl;
  for(int i=0;i<v.size();i++)
    {
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

void printArrofvec(vector<int> &v)
{
  cout<<"size : "<<v.size() << endl;
  for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }cout<<endl;
}

void printVecofVec(vector<int > &v)
{
  cout<<"size : "<<v.size() << endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  cout<<" hello world" << endl;

  // ************* pairs into vector **************

  // vector<pair<int,int> > v;

  // int n;
  // cout<<"enter the no of pairs of your vector"<<endl;
  // cin>>n;
  // for(int i =0;i<n;i++)
  //   {
  //     int x,y;
  //     cin >> x >> y;
  //     v.push_back(mp(x,y));
  //   }

  // ************** array of vectors ****************

    // int x;
    // cout<<"enter the no of vectors : ";
    // cin>>x;
    // vector <int> v[x]; // this is an array containing multiple vectors 
    // for (int i=0;i<x;i++)
    // {
    //   int a;
    //   cout<<" enter the size pf each vector :";
    //   cin>>a;
    //   for(int j =0;j<a;j++)
    //   {
    //     int e;
    //     cin>>e;
    //     v[i].push_back(e);
    //   }
    // }

  // printVec(v);
  // for( int i=0;i<x;i++)
  // {
  //   printArrofvec(v[i]);
  // }

  // cout<<v[0][0]<<endl;
  // cout<<v[0][1]<<endl;

  // ************* vector of vectors *************


  vector<vector<int> > v;
  int N; // no of vectors in v
  cin >> N;
  for(int i=0;i<N;i++)
  {
    int n; // no of elements in each vector 
    cin >>n;
    vector <int> temp; 
    for(int j=0;j<n;j++)
    {
      int x;
      cin>>x;
      temp.push_back(x);
    }
    v.push_back(temp);  // copied the temp vector into v
  }

  for(int i=0;i < v.size(); i++)  // v.size() v ka size  = jitne no of vectors
  {
    printVecofVec(v[i]); // puri row print hogi { v[0],v[1],v[2] print ho jaayge }
  }
    return 0;
}