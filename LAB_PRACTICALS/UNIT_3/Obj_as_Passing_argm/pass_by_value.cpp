//Pass_By_Value (Changing Value Inside Function Does not Effect Original).
#include<iostream>
using namespace std;
void changeNumber(int x){
    x = x + 10;         //change inside function
    cout<<"Inside Function (x) : "<<x<<endl;
}
int main(){
    int num = 20;
    changeNumber(num);
    cout<<"Outside Function (num) : "<<num<<endl;
}