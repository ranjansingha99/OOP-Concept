#include<bits/stdc++.h>
using namespace std;

// Polymorphism: allows us to reuse code by creating one function that's usable for multiple tasks.

/* Method Overriding: A derived class inherits the features of base class. If the same function 
is defined in both base and derived class and we call the function through the object of derived class. In such a case, 
the function of derived class is executed. This is known as function overriding */

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Animal a1;
    Dog d1;

    a1.speak();
    d1.speak();
}