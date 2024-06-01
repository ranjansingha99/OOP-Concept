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

    // CONSTRUCTOR 
    // Whenever we create our own constructor, then the default constructor gets killed.
    Hero(){
        cout<<"Constructor called."<<endl;
    }

    // Parameterized Constructor
    Hero(int health){
        this -> health = health;
    }
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main(){
    // Constructor
    Hero ranjan(100);   // This is like direct updating the value

    Hero ramesh(100, 'A');

    ramesh.print();
    
}