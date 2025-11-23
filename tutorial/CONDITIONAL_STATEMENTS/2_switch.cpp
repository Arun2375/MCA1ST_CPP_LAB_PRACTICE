#include <iostream> 
using namespace std;
int main(){
    int num;
    cout <<" Enter a number between 1 to 4: ";
    cin>>num;
    switch (num)
    {
    case 1:
        cout << "Hello! How are you ";
        break;
    case 2:
        cout << "What's your name dear? ";
        break;
    case 3:
        cout << "Where are you from ";
    case 4:
        cout << "Where are you going ";
        break;
    default:
        cout <<"Please enter a valid number ";
    }
}