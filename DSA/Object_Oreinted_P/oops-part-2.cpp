#include<bits/stdc++.h>
using namespace std;
class Human{
    // private:
    // int salary;
    public:
    int age;
    int height;
    int gender;

    // int getsalary(){
    //     return this->salary;
    // }
};

class Male : private Human {
    // private:
    // int salary;
    public:
    int salary;
    int colour;
    int getsalary(){
        return this->salary;
    }
    int getheight(){
        return this->height;
    }
};

int main()
{
    Human gagan;
    Male m1;
    // cout<<gagan.age<<endl;
    // cout<<m1.age<<endl;
    cout<<m1.getheight()<<endl;
    // cout<<m1.salary<<endl;
    // cout<<"this is salary of male m1 : "<<m1.getsalary()<<endl;
    return 0;
}