//Function Overloading--> different parameters can use same function name
// same name --> different works
// In C++ compiler automatically decide which function should call, depending on arguments

//SYNTAX
// int add(int a, int b);
// foat add(float x, float y)

//Example
#include <iostream>
using namespace std;
/*
//Function 1
int add(int a, int b){
    return a + b;
}
//Function 2
float add(float x, float y) {
    return x + y;
}
int main(){
    cout << "Sum (int): "<<add(5, 10)<<endl;
    cout<<"Sum (float): "<<add(2.5f, 3.7f)<<endl;
    return 0;
}
    */

// Example2_ Different Numbers of parameters
void show(int a) {
    cout<<"Single argument: "<<a<<endl;
}
void show(int a, int b){
    cout<<"Two arguments: "<<a<<", "<<b<<endl;
}
int main(){
    show(5);
    show(10, 20);
    return 0;
}
