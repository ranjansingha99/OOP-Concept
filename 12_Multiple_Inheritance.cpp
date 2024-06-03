#include<bits/stdc++.h>
using namespace std;

// a subclass can inherit from two or more superclasses

class Animal{
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }    
};

// Multiple Inheritance
class Hybrid : public Animal, public Human{

};

int main(){

    Hybrid h1;
    h1.bark();
    h1.speak();

}