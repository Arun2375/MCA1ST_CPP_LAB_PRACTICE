//A function can return a value back to the calling function using the return keyword.
//It mean's function can return the result after doing some work.

//SYNTAX:
// return_type function_name(parameters){
//     //body of function
//     return value;         //value  returned to the caller 
// }

//EXAMPLE

#include <iostream> 
using namespace std;
/*
int add (int a, int b) {         // return type int
    int sum = a + b;
    return sum;                  //returning the value
}
int main(){
    int result = add(10, 20);   //receiving returned value
    cout << "Sum = "  << result <<endl;
    return 0;
}
    */

//EXAMPLE 2
 
float area(float r){
    return 3.14 * r * r;
}
int main(){
    cout<<"Area = "<<area(2.5);
    return 0;
}