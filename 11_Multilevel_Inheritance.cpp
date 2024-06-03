#include<bits/stdc++.h>
using namespace std;

// a child class is derived from another class, which is itself derived from another parent class

class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

};

class Labrador : public Dog{

};

int main(){

    Labrador l1;
    l1.speak();

}