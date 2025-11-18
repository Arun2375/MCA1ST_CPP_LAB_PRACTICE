#include <iostream> 
using namespace std;

//Arithmetic Operators 
/*
int main(){
    int a = 4, b = 5;
    cout << "The value of a + b is "<< a + b <<endl;
    cout << "The value of a - b is "<< a - b <<endl;
    cout << "The value of a * b is "<<a * b <<endl;
    cout <<"The value of a / b is "<<a / b <<endl;
    cout <<"The value of a % b is "<<a % b <<endl;
    cout <<"The value of a++ is "<<a++ <<endl;
    cout <<"The value of a-- is "<<a--<<endl;
    cout <<"The value of ++a is "<<++a<<endl;
    cout <<"The value of --a is "<<--a<<endl;
}
*/

//Relational Operator 
/*>	Greater than
<	Less than
>=	Greater than or equal to
<=	Less than or equal to
==	Is equal to
!=	Is not equal to
*/
//example
/*
int main ()
{
    int a = 4, b = 5;
    cout <<"The value of a == b is "<<(a == b)<<endl;
    cout <<"The value of a < b is "<<(a < b)<<endl;
    cout <<"The value of a > b is "<<(a > b)<<endl;
}
*/

//LOGICAL OPERATORS
// &&	AND Operator  1 1 = 1
// ||	OR Operator 1 0 = 1
// !	NOT Operator 1 = 0 or 0 = 1

//Example
/*
int main(){
    int a = 1, b = 0;
    cout << "The value of a && b is " << (a && b) <<endl;
    cout << "The value of a || b is " << (a || b) <<endl;
    cout << "The value of !a is " <<(!a) <<endl;
}
*/

// BITWISE OPERATOR 
// &	Bitwise AND
// |	Bitwise OR
// ^	Bitwise XOR
// ~	Bitwise Complement
// >>	Shift Right Operator
// <<	Shift Left Operator

int main()
{
    int a = 13;   //1101
    int b = 5;    //101
    cout << "The value of a & b is " << (a & b) << endl;
    cout << "The value of a | b is " <<( a | b)<<endl;
    cout << "The value of a ^ b is " << (a ^ b)<<endl;
    cout << "The value of ~a is " <<(~a)<<endl;
    cout << "The value of a >> b is " <<(a >> 2) <<endl;
    cout << "The value of a << b is " <<(a << 2)<<endl;
}