//A looping statement allows a set of instructions to be executed repeatedly untill a 
// a certain condition is true.
// It is used when we want to execute the same code multiple times without writing it again 
// and again.
#include <iostream>
using namespace std;
// FOR LOOP
// The for loop is used when we know in advance how many times we want to repeat a block of code.
//SYNTAX:
// for(initialization; condition; update){
//     //statement
// }
/*
int main(){
    for(int i = 1; i <= 5; i++){
        cout<<"Hello Arun!\n";
    }
    return 0;
}
*/
//WHILE LOOP
//is used when we don't know exactly how many times the will run. 
//It runs as long as the condition is true.

//SYNTAX
// while(condition){
//     //statements
// }

//Example 
/*int main(){
    int i = 1;
    while(i <= 5){
        cout<<i<<" ";
        i++;
    }
    return 0;
}
    */

//DO-WHILE LOOP
//The do-while loop is similar to the while loop, but it executes the code block at least once,
//even if the condition is false.
//SYNTAX:
// do{
//     //statements
// }while(condition);

//EXAMPLE
/*int main(){
    int i = 1;
    do {
        cout<<i<<" ";
        i++;
    }while(i <= 5);
    return 0;
}
    */

//NESTED LOOP
//When one loop is written inside another loop -> N-Loop
//used-> mostly -> need 2D output or making pattern (like star pattern, tables, etc)

//SYNTAX:
// for (intialization; condition; update)
// {
//     for(initialization; conditio; update)
//     {
//         //inner loop statements
//     }
// }

//EXAMPLE PRINT A PATTERN
int main(){
    for (int i = 1; i <= 3; i++) {       // Outer loop(i)-> controls rows
        for(int j = 1; j <= 4; j++){     // Inner loop(j) -> contrls columns
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}