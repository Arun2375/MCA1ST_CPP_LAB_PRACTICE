//Variables are containers for storing data values. In C++, there are different types of variables. 
/*
Integer--> int --> 232 or -1
Floating point --> float --> 23.53 or -12.23
Character --> char -- 'A' or 'z'.. values are bound to be surrounded by single quotes
boolean --> bool--> 0 or 1 for false and true.
Can't declare a variable without specifyint it's datatype.

SYNTAX 
data_type variable_name;
or
data_type variable_name = value;

Naming a variable
length 1 to 255 characters.
It contains only  alphabets, digits, and underscores (_).
Can't start with digit.
It can't include any white space in it's name.
Case sensitive A and a are different.
Can't use reserved keywords.

VARIABLE SCOPE
1. Local variable:declared inside the braces of any function and can be accessed only from that particular function.
2. Global variables:- declared outside of any function and can be accessed from anywhere.

*/
//An example that demonstrates the difference in application of a local and a global variable given below

#include <iostream>
using namespace std;
int a = 5;         // global variable 
void func()
{
    cout<<a<<endl;
}
int main()
{
    int a = 10;          //local variable 
    cout<<a<<endl;
    func();
    return 0;
}
