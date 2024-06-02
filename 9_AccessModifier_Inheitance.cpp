#include<bits/stdc++.h>
using namespace std;

// Inheriting properties of a class(Parent class) to another class(Child class).

// Parent class
class Human{

    private:
    int eyes = 2;

    protected:
    int height;

    public:
    int weight;
    int age;

    // void setHeight(int height){
    //     this->height = height;
    // }

    int getEyes(){
        return eyes;
    }
};

// Child class Public mode
class Male: public Human{

    public:
    string skin_color = "Fare";

    void setHeight(int height){
        this->height = height;
    }
    int getHeight(){
        return this->height;
    }

    void sleep(){
        cout<<"Male Sleep loud!"<<endl;
    }
};

// // Child class Protected mode

// class Male: protected Human{
//     public:
//     string skin_color = "Fare";
//     void sleep(){
//         cout<<"Male Sleep loud!"<<endl;
//     }
// };

// // Child class Private mode

// class Male: private Human{
//     public:
//     string skin_color = "Fare";
//     void sleep(){
//         cout<<"Male Sleep loud!"<<endl;
//     }
// };

int main(){

    // Here I have done experiment only on the basis of public access modifier of child class.
    // For rest check the table of access modifier.
    Male m1;
    m1.age = 40;
    cout<<m1.age<<endl;
    m1.weight = 100;
    cout<<m1.weight<<endl;
    // m1.height; // Not accessible here as "height" is protected in super class, accessible inside child class though.
    m1.setHeight(6);
    cout<<m1.getHeight()<<endl;
    cout<<m1.skin_color<<endl;

    m1.sleep();

    // m1.eyes; // Not accessible here as "eyes" is private in super class
    cout<<m1.getEyes()<<endl;

}