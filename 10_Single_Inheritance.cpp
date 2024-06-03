#include<bits/stdc++.h>
using namespace std;

// a single child class is inherited from a single parent class

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

int main(){

    Dog d1;
    d1.speak();

}