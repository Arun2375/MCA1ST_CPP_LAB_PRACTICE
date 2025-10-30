// A reference argument --> gives real address of variables to function
//That's why original variable changed

//SYNTAX:
// return_type function_name(data_type  & variable){
//     //body
// }

//EXAMPLE
#include <iostream>
using namespace std;
/*
void updateValue(int &x) {   //& means reference arguments
    x = x + 20;              //modifies the original variable
    cout<<"Inside function x = " << x <<endl;
}
int main(){
    int a = 10;
    updateValue(a);         //pass by reference
    cout<<"Outside function a = " << a<<endl;
    return 0;
}
*/

//Example 2_Swap using Reference Arguments 
void swapValues(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 5, b = 10;
    swapValues(a, b);
    cout<<"After swapping: a = "<<a<<", b = "<<b<<endl;
    return 0;
}