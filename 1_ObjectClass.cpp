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


    // Getter and Setter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(int l, string psw){
        if(psw == "ggg"){   // setting the level if password is verified
            level = l;
        }
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

// class EmptyClass{};

int main(){
    // Static allocation of object
    Hero h1;
    // EmptyClass e1;

    cout<<"Size of Hero class: "<<sizeof(h1)<<endl; // 8 Byte : Reason Padding, Greedy allignment
    
    // cout<<"Size of Empty class: "<<sizeof(e1)<<endl; // 1 Byte

    // h1.health = 100;
    h1.setHealth(100);
    h1.level = 10;

    // cout<<"h1.health: "<<h1.health<<endl;
    cout<<"h1.health: "<<h1.getHealth()<<endl;  // This is how using getter and setter we can access even the private properties.

    h1.setLevel(10, "ggg");

    // Dynamic Allocation of object
    Hero *h2 = new Hero;
    // (*h2).setHealth(90);
    h2->setHealth(90);

    cout<<"h2->health: "<<h2->getHealth()<<endl;
    // delete h2;

    h2->print();

}

/* Study about Padding and Greedy alignment*/