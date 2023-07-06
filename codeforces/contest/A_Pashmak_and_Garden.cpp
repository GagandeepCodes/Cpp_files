//code aisa likho ki,
//4 log debug krne se dare
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int dx = abs(x1-x2);
    int dy = abs(y1-y2);
    int x3,y3,x4,y4;
    if(dx!=0 && dy!=0){
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;

    }
    else if(dy!=0){
        x3 = x1 + abs(dy);
        x4  = x2 + abs(dy);
        y3  = y1;
        y4 = y2;
    }
    else{
        y3 = y1 + abs(dx);
        y4 = y2 + abs(dx);
        x3 = x1;
        x4 = x2;
    }
    if(dx!=0 && dy!=0 && dx!=dy){
        cout<<-1<<endl;
    }else{
        cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    }
    return 0;
}