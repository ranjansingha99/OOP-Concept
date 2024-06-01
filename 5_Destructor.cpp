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

    Hero(){
        cout<<"Constructor is called"<<endl;
    }
    
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){
    
    // Hero suresh(80, 'C');
    // Hero ritesh(100, 'A');

    // suresh.print();
    // ritesh.print();

    // // Assignment Operator
    // ritesh = suresh;
    // suresh.print();
    // ritesh.print();

    // Destructor
    Hero h1;

    Hero *h2 = new Hero;
    // Only one time destructor was called, becacuse only for statically allocated objects destructor is called automatically.
    // For dynamically allocated objects you have to call destructor manuallly
    delete h2;
}