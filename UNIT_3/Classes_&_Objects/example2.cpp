// Create a class Rectangle with data members: length and breadth.
// Write a member function to calculate and return the area of the rectangle.
// Create an object and display the area.
#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length, breadth;
    int area(){
        return length * breadth;
    }
};
int main(){
    Rectangle r1;
    cout<<"Enter Length: "<<endl;
    cin>>r1.length;

    cout<<"Enter breadth: "<<endl;
    cin>>r1.breadth;
    
    cout<<"Area : "<<r1.area();
    return 0;
}