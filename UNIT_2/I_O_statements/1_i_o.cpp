/*#include <iostream>         //both input and output statements are defined in iostream-> header file
using namespace std;
int main(){
    int age;

    cout<<"Enter your age: \n";
    cin>>age;            // Input statment__syntax->cin >> variable_name.
    cout<<"You are: "<<age<<" old.: ";     //Output statement__syntax-> cout << expression
    return 0;
}
*/

//MULTIPLE INPUTS & MULTIPLE OUTPUTS
/*int main(){
    int a, b;
    cout<<"Enter two number: ";
    cin>> a >> b ;      //multiple inputs
    cout<<"Sum = "<< a + b;   //multiple outputs
    return 0;
}
    */

//MANIPULATORS 
//used to make output more readable or improve_ format.
//defined in <iomanip> header file 
/*#include <iostream>
#include <iomanip>      //for manipulators
using namespace std;

int main(){
    float pi = 3.1415926;
    cout << "Default: "<<pi<<endl;              
    cout<<"Set precision (2): "<<setprecision (2)<<pi<<endl;         
    cout<<"Fixed precision: "<<fixed<<setprecision(2)<<pi<<endl;  
    cout<<"Width & Fill: "<<setw(10)<<setfill('*')<<123;         
    return 0;
}
    */

    //ESCAPE SEQUENCE
#include <iostream>
using namespace std;
int main(){
    cout<<"Hello\tWorld! \n";             //\t = tab space, \n -> New line
    cout<<"Welcome to C++ \n Programming Language\n";
    cout<<"This is a backslash: \\ \n";   //prints one backslash
    cout<<"He said, \"Work hard!\"\n";      //prints double quotes 
    cout <<"It's a beautiful day!\n";       //prints single quote normally 
    return 0;
}