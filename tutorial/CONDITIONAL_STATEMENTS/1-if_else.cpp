#include <iostream>
using namespace std;
int main ()
{
    int age;
    cout << "Enter yor age: ";
    cin>>age;
    if(age > 50){
        cout << "Input number is greater then 50 "<<endl;
    }
    else if (age == 50)
    {
        cout << "Input number is equal to 50! "<<endl;
    }
    else {
        cout << "Input numbe is less than 50! "<<endl;
    }
    return 0;
}