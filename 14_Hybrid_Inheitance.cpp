#include<bits/stdc++.h>
using namespace std;

// a combination of various types of inheritances
// below example shows combination of multiple and multilevel inheritance.

class A{
    public:
    void f1(){
        cout<<"Inside function 1"<<endl;
    }
};

class B : public A{
    public:
    void f2(){
        cout<<"Inside function 2"<<endl;
    }   
};


class C{
    public:
    void f3(){
        cout<<"Inside function 3"<<endl;
    }
};

class D : public B, public C{
    public:
    void f4(){
        cout<<"Inside function 4"<<endl;
    }
};

int main(){

    D d1;
    d1.f1();
    d1.f2();
    d1.f3();
    d1.f4();
}