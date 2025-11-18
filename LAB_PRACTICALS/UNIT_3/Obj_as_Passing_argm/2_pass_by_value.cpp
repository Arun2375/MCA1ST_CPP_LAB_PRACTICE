#include <iostream>
using namespace std;
class Box{
    public: 
    int length;
};
void display(Box a){
    cout<<"Length inside functio: "<<b.length<<endl;
}
int main(){
    Box b1;
    b1.length = 15;
    display(b1);
    cout<<"Original length : "<<b1.length<<endl;
}