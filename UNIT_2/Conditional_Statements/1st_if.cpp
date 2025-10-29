#include <iostream>
using namespace std;
int main(){
    int age = 12;
    if(age >= 18){
        cout<<"You are eligble for voting ";
    }
    else if(age > 100){
        cout<<"Person is Dead ";
    }
    else{
        cout<<"You are under age";
    }
    return 0;
}