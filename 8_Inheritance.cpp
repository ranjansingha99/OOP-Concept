#include<bits/stdc++.h>
using namespace std;

// Inheriting properties of a class(Parent class) to another class(Child class).

// Parent class
class Human{

    private:
    int eyes = 2;

    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return age;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
};

// Child class
class Male: public Human{

    public:
    string color = "Fare";

    void sleep(){
        cout<<"Male Sleep loud!"<<endl;
    }
};

int main(){

    Male m1;
    cout<<m1.age<<endl;
    cout<<m1.height<<endl;
    cout<<m1.weight<<endl;
    cout<<m1.color<<endl;

    m1.setWeight(100);
    cout<<m1.weight<<endl;
    m1.sleep();

    // m1.eyes; // Not accessible as "eyes" are private in super class

}