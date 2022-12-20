#include<bits/stdc++.h>
using namespace std;

class Hero{
    private :
    int health;

    public :
    char level;
    // Parameterized Constructor 
    Hero(int h, char ch)
    {
        health = h;
        level = ch;
    }

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
    //Called in this way bcoz Parameterized Constructor is made.
    // Hero Gagan(90,'D');
    Hero Gagan(80,'S');
    // Hero * babbar = new Hero();
    Hero h1(100,'A');

    // babbar->Sethealth(90);
    // babbar->Setlevel('A');
    Gagan.Sethealth(75);
    Gagan.Setlevel('D');
    cout<<"Health of Hero 1 is : "<<Gagan.Gethealth()<<endl;
    cout<<"Level of Hero 1 is : "<<Gagan.Getlevel()<<endl;
    //  cout<<"Health of Hero 2 is : "<<babbar->Gethealth()<<endl;
    // cout<<"Level of Hero 2 is : "<<babbar->Getlevel()<<endl;
    cout<<"Health of Hero 3 is : "<<h1.Gethealth()<<endl;
    cout<<"Level of Hero 3 is : "<<h1.Getlevel()<<endl;
    return 0;
}