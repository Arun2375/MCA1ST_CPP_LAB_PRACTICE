//Compiler directly insert the code--> instead of function call
//when we call inline function, instead of function call--> code copy]

//Syntax
// inline return_type
// function_name(parameters){
//     //body
// }
#include<iostream>
using namespace std;
inline int square(int x){
    return x * x;
}
int main(){
    cout<<"Square of 5 = "<<square(5)<<endl;
    cout<<"Square of 8 = "<<square(8)<<endl;
    return 0;
}
