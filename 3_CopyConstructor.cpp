#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    //properties

    // By default all the access modifier is private inside a class.
    private:
    int health;

    public:
    char level;

    // Constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    // Custom Copy Constructor
    Hero(Hero& temp){
        cout<<"Custom Copy Constructor called."<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main(){
    
    Hero suresh(80, 'C');
    suresh.print();

    // Copy Constructor
    Hero ritesh(suresh);    // Copy all the Constructor values of suresh into ritesh object
    // Hero ritesh = suresh;

    ritesh.print();
}