#include <iostream>
#include <utility> //to include pairs
#include <algorithm> //for swap inbuilt function
using namespace std;
int main()
{
    pair<int,int> pair1;
    pair1 = make_pair(2,4);
    pair<int,int> pair2(2,4); // another way to initialize a pair
    cout<<pair1.first<<" "<<pair1.second<<endl;
    swap(pair1.first,pair1.second); 
    cout<<pair1.first<<" "<<pair1.second<<endl; 
    cout<<pair2.first<<" "<<pair2.second<<endl;
    return 0;
}