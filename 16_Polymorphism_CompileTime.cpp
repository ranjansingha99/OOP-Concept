#include<bits/stdc++.h>
using namespace std;

// Polymorphism: allows us to reuse code by creating one function that's usable for multiple tasks.

// Function overloading: can be done only by changing the input params of the function (numsber of arams/ types of params)
class functionOverloading{
    public:
    void sayHello(){
        cout<<"Hello Ranjan"<<endl;
    }
    
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

// Operator overloading: It's like doing some custom work by an operator.
class operatorOverloading{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+(operatorOverloading &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<< "Output: "<< val2 - val1 <<endl; // Here we are using + operator for subtraction
    }

    void operator()(){
        cout<<"I am Bracket. "<<this->a<<endl;
    }
};


int main(){
    // functionOverloading obj1;
    // obj1.sayHello();
    // obj1.sayHello("Deepshikha");

    operatorOverloading obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

}