//Q1. Create a Student class with data members: name, age and marks.
//Create an object of the class stores some values in it and displays all the details using member function.

#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    float marks;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Arun";
    s1.age = 21;
    s1.marks = 58.5f;
    s1.display();
    return 0;
}
