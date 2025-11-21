// C++ program to find if an integer is positive, negative or zero
// using nested if statements
#include <iostream> 
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (num != 0){
        if(num > 0){
            cout <<"The number is Positive "<< endl;
        }
        else{
            cout << "The number is Negative "<< endl;
        }
    }
    else{
            cout << "The number is 0 and it is neither positive nor negative ";
        }
        cout << "I am piro..";
        return 0;
}