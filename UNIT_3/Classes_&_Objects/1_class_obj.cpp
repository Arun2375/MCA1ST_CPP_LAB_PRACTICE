#include <iostream>
using namespace std;

//Class--> Blueprint/Template that creates obj. User defined DT. 
//Object real world instance of class.
class Student{                                      //blueprint
    public:                                         //Access specifie public
    string name;                                    //Data member's
    int age;                                          
    void show(){                                    //Member function
        cout<<"Name: "<<name<<endl;                  
        cout<<"Age: "<<age<<endl;
    }                                              
};     
int main(){                                          
    Student s1;                                      //obj. created (memory allocate)
    s1.name = "Arun";                                //set data inside function
    s1.age = 22;
    s1.show();                                       //function call via object 
    return 0;
}