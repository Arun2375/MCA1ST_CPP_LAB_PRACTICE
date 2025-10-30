//Conditiona statements-> execute different part of the code on the basis of condition(true/false)
//It gives the decision making power to the program.
#include <iostream>
using namespace std;

//IF STATEMENT
// It checks a condition-> if cond. true-> block of code to be executed.
//If false -> skip the code

//Syntax -> if(condition) {
//             statement;
//           }
/*int main(){
    int age = 20;

    if (age >= 18){
        cout<<"You are eligible to vote ";
    }
    return 0;
}
*/

//IF_ELSE_STATEMENT
//syntax
// if (contition){
//     executes if condition is true;
// }else{
//     executes if condition is false
// }

/*int main(){
    int marks = 45;

    if (marks >= 50){
        cout<<"You passed the exam ";
    }else{
        cout<<"You failed the exam";
    }
    return 0;
}
    */

//IF_ELSE...IF_ELSE..LADDER
//Use-> when-> check -> Multiple conditions
//Syntax:-
// if (condition){
//     statements_1;
// }
// else if(condition){
//     statements_2;
// }
// else{
//     statement_3;
// }

/*int main(){
    int marks = 85;

    if (marks >= 90){
        cout<<"Grade A+";
    }
    else if (marks >= 75){
        cout<<"Grade A";
    }
    else if(marks >= 60){
        cout<<"Grade B";
    }
    else{
        cout<<"Fail";
    }
}
    */

//NESTED_IF_STATEMENT
// Use-> use another if in existed if
//Mostly used when we have to check another condition in existed condition
/*int main(){
    int age = 25;
    char citizen = 'Y';

    if (age >= 18){
        if (citizen == 'Y')
        {
           cout<<"You can vote in India";
        }else{
            cout<<"You are not an Indian citizen.";
        }
    }else{
        cout<<"You are under age";
    }
    return 0;
}
    */

//SWITCH STATEMENT
//allows variable to be tested for equality against a list of values. Each value is called a case,
// and the variable being switched on is checked for each cas. When a match is found,
// the corresponding block of code is executed.

//SYNTAX:-
// switch (expression) {    //it evaluate (mostly int or char)
//     case value1:         //if expression value match then-> this code run.
//     // Code block 1
//     break;               //stop execution--> otherwise next also execute-> called-> fall-through

//     case value2:
//     //Code block 2
//     break;

//     case value3:
//     //Code block 3
//     break;

//     default:               // if expression doesn't match any case--> it runs.
//     // Default code block
// }

//code example

int main(){
    int day;
    cout<<"Enter day number (1-7): ";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;

    case 2:
        cout<<"Tuesday";
        break;
    
    case 3:
        cout<<"Wednesday";
        break;

    case 4:
        cout<<"Thursday";
        break;
    
    case 5:
        cout<<"Friday";
        break;

    case 6:
        cout<<"Saturday";
        break;
    
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Invalid day";
    }
    return 0;
}