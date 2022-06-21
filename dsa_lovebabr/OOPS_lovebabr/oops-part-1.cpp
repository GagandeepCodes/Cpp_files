#include<bits/stdc++.h>
using namespace std;

class Hero{
    private :
    int health;

    public :
    char level;

    void Sethealth(int h)
    {
        this->health = h;
    }
    void Setlevel(char ch)
    {
        this->level = ch;
    }
    int Gethealth()
    {
        return health;
    }
    char Getlevel()
    {
        return level;
    }
};

int main()
{
    Hero Gagan;
    Hero * babbar = new Hero();
    babbar->Sethealth(90);
    babbar->Setlevel('A');
    Gagan.Sethealth(100);
    Gagan.Setlevel('D');
    cout<<"Health of Hero 1 is : "<<Gagan.Gethealth()<<endl;
    cout<<"Level of Hero 1 is : "<<Gagan.Getlevel()<<endl;
     cout<<"Health of Hero 2 is : "<<babbar->Gethealth()<<endl;
    cout<<"Level of Hero 2 is : "<<babbar->Getlevel()<<endl;
    return 0;
}