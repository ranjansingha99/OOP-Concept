#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
    //properties

    // By default all the access modifier is private inside a class.
    private:
    int health;

    public:
    char *name;
    char level;

    Hero(){
        cout<<"Simple Constructor called."<<endl;
        name = new char[100];
    }

    // Custom Copy Constructor
    Hero(Hero& temp){
        cout<<"Custom Copy Constructor called."<<endl;

        //Creating a seperate array for storing name to apply DEEP COPY
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
        strcpy(this->name, temp.name);
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(int l){
        level = l;
    }

    void setName(char* s){
        strcpy(name, s);
    }

    void print(){
        cout<<this->health<<endl;
        cout<<level<<endl;
        cout<<name<<endl;
    }
};

int main(){

    Hero h1;
    h1.setHealth(12);
    h1.setLevel('D');
    char name[7] = "Ranjan"; 
    h1.setName(name);

    // To use default copy constructor comment out the custom copy constructor code.
    Hero h2(h1);
    h1.print();
    h2.print();

    h1.name[0] = 'S';

    h1.print();
    h2.print();

}