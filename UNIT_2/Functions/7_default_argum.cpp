//Default arguments are those values that automatically assign function parameters

//SYNTAX
// return_type function_name(type arg1, type arg2 = value, type arg3 = value){
//     //body
// }

//Example
#include <iostream>
using namespace std;
void greet(string name = "Friend") {
    cout<<"Hello, "<< name << "!"<<endl;
}
int main(){
    greet("Arun");        //given argument
    greet();           //no argument
    return 0;
}