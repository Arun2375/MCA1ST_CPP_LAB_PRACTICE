// A structure is a user defined data type that allows you to combine different types of 
//variables (like int, float, string etc) into a single unit.
//Structure-> Container->store different DT together.
// SYNTAX:
// struct structure_name {
//     data_type member1;
//     data_type member2;
//     ...
// };
#include <iostream>
using namespace std;

/*struct Student             //structure name-> student
{
    int rollNo;           //create 3 members-> rollNo, name, marks.
    string name;
    float marks;
};
int main(){
    Student s1;         //structure variable
    //value assigned
    s1.rollNo = 0101;
    s1.name = "Arun Parihar";
    s1.marks = 19.99;
    //print output
    cout <<"Roll No: "<<s1.rollNo<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
    return 0;
}
*/

//2. ENUMERATION (enum)
//An enumeration (enum) is a user-defined data type that consists of named integer constants.
//It is used to assign names to integer values, making the program more readable. 
//It gives meaningful name to a fixed value

//SYNTAX
//enum enum_name {value1, value2, value3, ...};

//Example 
enum Days { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};      

int main(){
    Days today = Wednesday;
    cout<<"Day number: "<< today <<endl;
    return 0;
}
