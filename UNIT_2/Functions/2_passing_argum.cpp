//Passing arguments means sending data (values or variables )from the main fun. to a user-defined fun.
// 2 ways--> 1. Pass by value.  2.Pass by reference

// 1. Pass by value

#include <iostream>
using namespace std;
/*
void changeValue(int x) {
    x = x + 10;            //change in copy
    cout<<"Inside function x = "<<x<<endl;
}
int main() {
    int a = 5;
    changeValue(a);        //pass by value
    cout << "Outside function a = " << a <<endl;
    return 0;
}
    */

//PASS BY REFERENCE 
//When we send variable address during function call that is Pass by Refernce
//Function dirctly works on original variables
//No copy are created 

//SYNTAX:
// void functionName(int &x) {   //& means reference _means_ address of original variable
//     //body
// }

//Example
void changeValue(int &x){   //&means reference variable
    x = x + 10;             //change in original variable
    cout<<"Inside function x = "<< x <<endl;
}
int main(){
    int a = 5;
    changeValue(a);         //pass by reference
    cout<<"Outside function a = " <<a<<endl;
    return 0;
}