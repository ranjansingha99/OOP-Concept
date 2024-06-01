#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    static int timeToComplete;

    // Static function can only return static variable
    static int func(){
        return timeToComplete;
    }
};

// We can assign static variable without creating object, Static variable is part of class not object
int Hero::timeToComplete = 10;

int main(){

    cout<<Hero::timeToComplete<<endl;

    // Calling static function
    cout<<Hero::func()<<endl;

}