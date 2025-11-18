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
/*int a = 5;         // global variable 
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
*/

//DATATYPES
//DT define the type of data a variable can hold.

// TYPES 

// Built in DT
// predefined for a language and could be used directly by the programmer
// user-defined data types
// These data types are defined by the user itself.

// Examples are: class, struct, union, enum

// Derived data types
// These data types are derived from the primitive built-in data types.

// Examples are: array, pointer, function

// Some of the popular built-in data types and their applications are:

// Data Type	Size	              Description
// int	  2 or 4 bytes	           Stores whole numbers, without decimals
// float	4 bytes	               Stores fractional numbers, containing one or more decimals. They require 4 bytes of memory space.
// double	8 bytes         	   Stores fractional numbers, containing one or more decimals. They require 8 bytes of memory space.
// char	1 byte	                   Stores a single character/letter/number, or ASCII values
// boolean	1 byte	               Stores true or false

//C++ CONSTANTS
// Constants are unchangeable; when a constant variable is initialized in a program, 
// its value cannot be changed afterwards.

int main ()
{
    const float PI = 3.14;
    cout<<"The value of PI is "<<PI<<endl;  
    PI = 3.00; //error, since changing a const variable is not allowed.
}