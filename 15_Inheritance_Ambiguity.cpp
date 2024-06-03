#include<bits/stdc++.h>
using namespace std;

// What if there is same function names in multiple classes.
// To tackle this ambiguity we use scope resolution operator ::

class A{
    public:
    void func(){
        cout<<"Inside class A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Inside class B"<<endl;
    }
};

class C : public A, public B{
       
};


int main(){

    C c1;

    c1.A::func();   // Here we used scope resolution operator ::
    c1.B::func();
    
}