#include<bits/stdc++.h>
using namespace std;

// Wrapping up data members & functions in a class (it's like hiding the details of the class)

// Fully Encapsulated Class: Where all the data members are private.


class Student{

    private:
    string name;
    int age;
    double height;

    public:
    int setAge(int age){
        this->age = age;
    }

    int getAge(){
        return age;
    }
};

int main(){
    Student s1;

    s1.setAge(13);
    cout<<"Age of the student: "<<s1.getAge()<<endl;
}